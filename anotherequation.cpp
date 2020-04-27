#include <iostream>
#include <math.h>


int main()
{
	
	double a,b,c,x1,x2,D;
	std::cout << "enter a: ";
	std::cin >> a;
	std::cout << "enter b: ";
	std::cin >> b;
	std::cout << "enter c: ";
	std::cin >> c;
	D= pow(b , 2) - a * c * 4 ;

	if (D < 0) {
		std::cout << "error\n";
	} else if (D == 0) {
		x1 = -b / (2 * a);
		std::cout << x1 << "\n";
	} else if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		std::cout << x1 << "\n" << x2 << "\n";
	}
		
	
}