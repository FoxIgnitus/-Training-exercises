#include <iostream>
#include <cmath>


int main() {

    int b;
    long int a;
    
    std::cout << "enter number: ";
    std::cin >> a;
    b = 0;
    
    while (a > 0) {

        b = b + a % 10;
        a = a / 10;
        

    }

    std::cout << "sum is " << b << "\n";
    system("Pause");
    return 0;

}