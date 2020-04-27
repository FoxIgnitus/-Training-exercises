#include <iostream>
#include <math.h>



int main()
{
	double y[17] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	double x[17] = { -4, -3.5, -3, -2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4};
	for (int i = 0; i < 17; ++i)
	{
		y[i] = (pow(x[i] , 2) - 2 * x[i] + 2) / (x[i] - 1);
		std::cout << y[i] << "\n";
	}
}