#include <iostream>
#include <math.h>

	
	int monthlypay(double , double , double);

int main()
{
	
	double s, p, m, n;
	
	std::cout << "enter credit amount: ";
	std::cin >> s;
	std::cout << "enter interest rate: ";
	std::cin >> p;
	std::cout << "enter numbers of years: ";
	std::cin >> n;
	
	monthlypay(s, p, n);
}


int monthlypay(double s,double p, double n)
{
	double r, m;
	r = p / 100;
	m = s * r * pow((1 + r) , n) / (12 * (pow((1 + r) , n) - 1));
	std::cout << "monthly pay is " << m << "\n";
	return 0;
}