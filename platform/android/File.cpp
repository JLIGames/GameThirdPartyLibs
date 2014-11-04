#include <android/asset_manager_jni.h>
#include <assert.h>
#include "Log.h"
#include "File.h"

static AAssetManager* asset_manager;


#ifndef _Included_com_example_jligameenginetest_File
#define _Included_com_example_jligameenginetest_File
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_jligameenginetest_JLIGameEngineTestLib
 * Method:    init_asset_manager
 * Signature: (Landroid/content/res/AssetManager;)V
 */
JNIEXPORT void JNICALL Java_com_example_jligameenginetest_JLIGameEngineTestLib_initAssetManager
  (JNIEnv * env, jclass cls, jobject java_asset_manager)
{
	asset_manager = AAssetManager_fromJava(env, java_asset_manager);
}

#ifdef __cplusplus
}
#endif
#endif

char *File::asset_path(const char *file, char *filePath)
{
	strcpy(filePath, "file:///android_asset/");

	strcat(filePath, file);

	return filePath;
}

bool File::readAsset(const std::string filepath)
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
		if (bytesread)
		{
			Log("bytesread: %d.", bytesread);
			Log("text: %s.", (unsigned char*)file_content);
		}
		else
		{
			Log("unable to read file %s", filepath.c_str());
		}
		AAsset_close(asset);

		return true;
	}

	return false;
}

bool File::write(const std::string filepath, const char *data)
{
	return false;
}

