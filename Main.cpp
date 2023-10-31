//THis
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <direct.h>
int main()
{
	srand(static_cast<unsigned>(time(0)));
	
	const char* foldername = "MyFolderBitch";
	int result = _mkdir(foldername);
	int result2 = _mkdir("name");
	if (result != 0)
	{
		std::cout << "wrong" << std::endl;
	}
}
