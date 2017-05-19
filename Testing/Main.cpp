#include <ZipFile.h>

void main()
{
	GrumpyZip::ZipFile file;

	if (file.LoadZipFile("Test.lol"))
	{
		auto temp = file.GetFile("Test.txt");
		printf("%s\n\n\n", temp->Data.data());
	}	
}