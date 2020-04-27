#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string line;
	std::ifstream in;
	in.open("D:/projects/lynx.txt");
	if (in.is_open())
	{
		while(getline(in, line))
		{
			std::cout << line << std::endl;
		}
	}
	else
	{
		std::cout << "lynx can't be found\n";
	}
		in.close();
	return 0;
	
	
}
