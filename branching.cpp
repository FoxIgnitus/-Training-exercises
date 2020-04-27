#include <iostream>
#include <math.h>

int main()
{
 double a, x, w;
	std::cout << "enter x: ";
	std::cin >> x;
	std::cout << "enter a: ";
	std::cin >> a;
	w = abs(x) < 1 ? a * (log10(x)) : sqrt(a - pow(x,2));
	std::cout << "result is " << w << "\n";
}