#include <android/asset_manager_jni.h>
#include <assert.h>
#include "Log.h"
#include "File.h"

static AAssetManager* asset_manager;

/*
 * Class:     com_example_jligameenginetest_JLIGameEngineTestLib
 * Method:    init_asset_manager
 * Signature: (Landroid/content/res/AssetManager;)V
 */
JNIEXPORT void JNICALL Java_com_example_jligameenginetest_JLIGameEngineTestLib_init_1asset_1manager
  (JNIEnv * env, jclass cls, jobject java_asset_manager)
{
//	asset_manager = AAssetManager_fromJava(env, java_asset_manager);
}


File::File():
		file_content(0),
		file_size(0)
{

}
File::File(const std::string filepath):
				file_content(0),
				file_size(0)
{
	open(filepath);
}
File::File(const File &rhs):
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
File::~File()
{
	if(file_content)
	{
		free(file_content);
	}
}

File &File::operator=(const File &rhs)
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

bool File::open(const std::string filepath)
{
	AAsset* asset = AAssetManager_open(asset_manager, filepath.c_str(), AASSET_MODE_UNKNOWN);

	if (asset)
	{
		Log("Asset is opened.");

		if(file_content)
		{
			free(file_content);
		}

		file_size = AAsset_getLength(asset);
		file_content = malloc(file_size);

		int bytesread = AAsset_read(asset, file_content, file_size);
		if (bytesread) {
			Log("bytesread: %d.", bytesread);
			Log("text: %s.", file_content);
		}
		AAsset_close(asset);

		return true;
	}

	return false;
}

void *File::content()const
{
	return file_content;
}
size_t File::size()const
{
	return file_size;
}
