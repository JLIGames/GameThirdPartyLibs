#include "../core/File.h"
#include <assert.h>

bool File::open(const std::string filepath)
{
    FILE* stream = fopen(filepath.c_str(), "r");
    
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