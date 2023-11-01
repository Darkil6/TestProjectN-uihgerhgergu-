#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <sys/types.h>

int main()
{
	srand(static_cast<unsigned>(time(0)));
	
	const char* foldername = "MyFolderBitch";
	int result = P_tmpdir(foldername);
	int result2 = P_tmpdir("name");
	if (result != 0)
	{
		std::cout << "wrong" << std::endl;
	}
    
    return 0;
}
