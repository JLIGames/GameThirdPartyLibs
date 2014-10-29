#ifndef _JLIGAMEENGINE_FILE_H_
#define _JLIGAMEENGINE_FILE_H_

#include <string>
#include <stdio.h>
#include <stdlib.h>

class File
{
public:
    static FILE	*fopen(const char * filename, const char * mode)
    {
        char buffer[512];
        File::asset_path(filename, buffer);
        return fopen(buffer, mode);
    }
    
    static char *asset_path(const char *file, char *filePath);
    
	File():
			file_content(0),
			file_size(0)
	{

	}
	File(const std::string filepath):
					file_content(0),
					file_size(0)
	{
		readAsset(filepath);
	}
	File(const File &rhs):
							file_content(0),
							file_size(0)
	{
		if(rhs.file_content)
		{
			file_size = rhs.file_size;
			file_content = malloc(file_size);

			memcpy(file_content, rhs.file_content, rhs.file_size);
		}
	}
	~File()
	{
		if(file_content)
		{
			free(file_content);
		}
	}

	File &operator=(const File &rhs)
	{
		if(this != &rhs)
		{
			if(file_content)
			{
				free(file_content);
			}

			if(rhs.file_content)
			{
				file_size = rhs.file_size;
				file_content = malloc(file_size);

				memcpy(file_content, rhs.file_content, rhs.file_size);
			}
		}
		return *this;
	}

	bool readAsset(const std::string filepath);
    static bool write(const std::string filepath, const char *data = NULL);

	void *content()const
	{
		return file_content;
	}
	size_t size()const
	{
		return file_size;
	}
	void reset()
	{
		if(file_content)
		{
			free(file_content);

			file_content = 0;
			file_size = 0;
		}
	}
private:
	void *file_content;
	size_t file_size;
};
#endif
