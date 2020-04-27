#include <iostream>
#include <math.h>

int main()
{
	double x, b, z, y;
	std::cout << "enter x: ";
	std::cin >> x;
	std::cout << "enter b: ";
	std::cin >> b;
	std::cout << "enter y: ";
	std::cin >> y;

	if (b > x) {
		z = (log10(b - y)) * sqrt(b - x);
		std::cout << "result is " << z << "\n";
	} else {
		std::cout << "you can't do this" << "\n";
	}
	
}