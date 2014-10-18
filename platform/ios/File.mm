#include "File.h"
#import <UIKit/UIKit.h>

bool File::open(const std::string filepath)
{
    printf("%s", filepath.c_str());
    
    NSMutableString* adjusted_relative_path = [[NSMutableString alloc] initWithString:@"/assets/"];
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