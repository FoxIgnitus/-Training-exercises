#include <iostream>
#include <math.h>

int main() 
{
    double r, R, l, V, S, h;
    const double p = 3.14;
    std::cout << "enter r:";
    std::cin >> r;
    std::cout << "enter R:";
    std::cin >> R;
    std::cout << "enter l:";
    std::cin >> l;
     std::cout << "enter h:";
    std::cin >> h;
    V = 1 / 3 * h * p * (pow(R , 2) + r * R + pow(r , 2));
    S =  p * (pow(R , 2) + (R + r) * l + pow(r , 2));
}