#include <ZipFile.h>

void main()
{
	GrumpyZip::ZipFile file;

	if (file.LoadZipFile("Assets.paklol"))
	{
		auto temp = file.GetFile("Assets/Shaders/GLSL/Terrain.fs");
		printf("%s\n", temp->Data.data());
	}	
}