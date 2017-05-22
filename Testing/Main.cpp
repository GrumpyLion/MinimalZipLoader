#include <ZipFile.h>

void main()
{
	GrumpyZip::ZipFile file;

	if (file.LoadZipFile("Assets.paklol"))
	{
		auto temp = file.GetFile("Assets/Shaders/GLSL/Test.fs");
		printf("%s\n\n\n", temp->Data.data());
	}	
}