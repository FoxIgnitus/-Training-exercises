#include <iostream>



int main()
{
	double b,c,x;
	std::cout << "write the b:";
	std::cin >> b;
	std::cout << "write the c:";
	std::cin >> c;
	x = -(c / b);
	std::cout << "x is " << x << "\n";
}