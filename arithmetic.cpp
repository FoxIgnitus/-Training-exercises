#include <iostream>

int main()
{
 	std::cout << "write the first number:";
	double a,b,c,d,e,f,g;
	std::cin >> a;
	std::cout << "write the second number:";
	std::cin >> b;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	std::cout << "sum is  " << c << "\n";
	std::cout << "difference is  " << d << "\n";
	std::cout << "multipy result is  " << e << "\n";
	std::cout << "quotient is  " << f << "\n";
	
}