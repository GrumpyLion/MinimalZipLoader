#include <ZipFile.h>

void main()
{
	GrumpyZip::ZipFile file;

	if (file.LoadZipFile("Test.pak"))
	{
		auto temp = file.GetFile("Assets/Shaders/HLSL/Test.vs");
		printf("%s\n\n\n", temp->Data.data());

		temp = file.GetFile("Assets/Textures/earth_day.bmp");
		printf("%s\n", temp->Data.data());
	}	
}