#ifndef _JLIGAMEENGINE_FILE_H_
#define _JLIGAMEENGINE_FILE_H_

#include <string>

class File
{
public:
	File();
	File(const std::string filepath);
	File(const File &rhs);
	~File();

	File &operator=(const File &rhs);

	bool open(const std::string filepath);

	void *content()const;
	size_t size()const;
private:
	void *file_content;
	size_t file_size;
};
#endif
