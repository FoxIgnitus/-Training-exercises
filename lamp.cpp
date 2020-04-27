#include <iostream>
#include <string>


int main()
{
	std::string a,b,c;
	int d;
	d = 0;
	std::cout << "is it day?\n";
	std::cin >> a;
	std::cout << "are the curtais closed?\n";
	std::cin >> b;
	std::cout << "is the lamp on?\n";
	std::cin >> c;
	d= a=="yes" ? d++ : d--;
	d= b=="no" ? d++ : d--;
	d= c=="yes" ? d+3 : d--;

	if (d > 0) {
		std::cout << "room is light\n";
		return 0;
	} else {
		std::cout << "room isn't light\n";
		return 0;
	}
}