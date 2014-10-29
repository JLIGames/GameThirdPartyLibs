#include "File.h"
#import <UIKit/UIKit.h>

char *File::asset_path(const char *file, char *filePath)
{
//    NSArray *paths_ = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
//    NSString *docs_dir_ = [paths_ objectAtIndex:0];
//    NSString *full_path = [NSString stringWithFormat:@"%@/%s", docs_dir_, file];
    
    
    NSMutableString* adjusted_relative_path = [[NSMutableString alloc] initWithString:@"assets/"];
    [adjusted_relative_path appendString: [[NSString alloc] initWithCString:file
                                                                   encoding:NSASCIIStringEncoding]];
    
    const char *path = [[[NSBundle mainBundle] pathForResource:adjusted_relative_path
                                                        ofType:nil]
                        cStringUsingEncoding:NSASCIIStringEncoding];
    
    strcpy(filePath, path);
    return filePath;
}

bool File::readAsset(const std::string filepath)
{
    printf("%s", filepath.c_str());
    
    NSMutableString* adjusted_relative_path = [[NSMutableString alloc] initWithString:@"assets/"];
    [adjusted_relative_path appendString:
     [[NSString alloc] initWithCString:filepath.c_str() encoding:NSASCIIStringEncoding]];
    
    const char *path = [[[NSBundle mainBundle] pathForResource:adjusted_relative_path ofType:nil]
                        cStringUsingEncoding:NSASCIIStringEncoding];
    
    
    FILE* stream = fopen(path, "r");
    
    if(stream)
    {
        reset();
        
        fseek(stream, 0, SEEK_END);
        file_size = ftell(stream);
        fseek(stream, 0, SEEK_SET);
        
        file_content = malloc(file_size);
        fread(file_content, file_size, 1, stream);
        
        assert(ferror(stream) == 0);
        fclose(stream);
        
        return true;
    }
    
    return false;
}

bool File::write(const std::string filepath, const char *data)
{
    //get the documents directory:
    NSArray *paths = NSSearchPathForDirectoriesInDomains
    (NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *documentsDirectory = [paths objectAtIndex:0];
    
    //make a file name to write the data to using the documents directory:
    NSString *fileName = [NSString stringWithFormat:@"%@/%s",
                          documentsDirectory, filepath.c_str()];
    //create content - four lines of text
    NSString *content = [NSString stringWithUTF8String:data];
    //save content to the documents directory
    [content writeToFile:fileName
              atomically:NO
                encoding:NSStringEncodingConversionAllowLossy
                   error:nil];
    return true;
}