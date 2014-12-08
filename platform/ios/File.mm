#include "File.h"
#import <UIKit/UIKit.h>

const char *File::asset_path(const char *file)
{
    NSMutableString* adjusted_relative_path = [[NSMutableString alloc] initWithString:@""];
    [adjusted_relative_path appendString: [[NSString alloc] initWithCString:file
                                                                   encoding:NSASCIIStringEncoding]];
    
    return [[[NSBundle mainBundle] pathForResource:adjusted_relative_path
                                                        ofType:nil]
                        cStringUsingEncoding:NSASCIIStringEncoding];
}

bool File::readAsset(const char * filepath)
{
    FILE *stream = std::fopen(asset_path(filepath), "r");
    char *fileContent = NULL;
    
    if(stream)
    {
        reset();
        
        fseek(stream, 0, SEEK_END);
        file_size = ftell(stream);
        fseek(stream, 0, SEEK_SET);
        
        fileContent = (char*)malloc(file_size);
        fread(fileContent, file_size, 1, stream);
        
        assert(ferror(stream) == 0);
        fclose(stream);
        
        fileContent[file_size] = '\0';
        
        file_content = fileContent;
        
        return true;
    }
    
    return false;
}

bool File::write(const char * filepath, const char *data)
{
    //get the documents directory:
    NSArray *paths = NSSearchPathForDirectoriesInDomains
    (NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
    //make a file name to write the data to using the documents directory:
    NSString *fileName = [NSString stringWithFormat:@"%@/%s",
                          documentsDirectory, filepath];
    //create content - four lines of text
    NSString *content = [NSString stringWithUTF8String:data];
    //save content to the documents directory
    [content writeToFile:fileName
              atomically:NO
                encoding:NSStringEncodingConversionAllowLossy
                   error:nil];
    return true;
}