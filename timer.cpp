#include <iostream>
#include <Windows.h>
 

 
int main() {
    
	int sec;

	std::cout << "Enter time to wait in seconds: ";
	std::cin >> sec;

	for (int i = 0; i < sec; i++) {

		Sleep(1000);

	}

	std::cout << "\a";

    std::cin.clear();
    std::cin.ignore(32757, '\n');
    std::cin.get();
    return 0;

}
