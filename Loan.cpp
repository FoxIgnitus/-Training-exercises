#include <iostream>
#include <math.h>

	
	int interest(double , double , double);

int main()
{
	
	double s, m, n;
	
	std::cout << "enter credit amount: ";
	std::cin >> s;
	std::cout << "enter monthly pay: ";
	std::cin >> m;
	std::cout << "enter numbers of years: ";
	std::cin >> n;
	interest(s, m, n);
}


int interest(double s,double m, double n)
{
    double r, x, p;
    p = 0;
	for ( p = 1 ; p <= 100 ; ++p) {
	    r = p / 100;
	    x = s * r * pow((1 + r) , n) / (12 * (pow((1 + r) , n) - 1));

        if (x == m){
            std::cout << "interest rate is " << p << "\n";
        }

    }

	return 0;
}