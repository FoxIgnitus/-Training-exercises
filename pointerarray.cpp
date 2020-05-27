#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


int main() {

    double *p;
    std::string answer;
    int n;

    srand(time(0));
    n = 0;

    while ( answer != "No" ){
    
    std::cout << "enter your array size: ";
    std::cin >> n;
    p = new double[n];

    for( int i = 0; i < n; ++i){

         p[i] = std::rand();

    }

    for(int i = 0; i < n; ++i) {

        std::cout << p[i] << " ";

    }

    std::cout << "\n";
    delete [] p;
    std::cout << " do you want to create new array? (Yes/No): ";
    std::cin >> answer;

    }

    std::cout << "program finished" << "\n";

    system("pause");
    return 0;

}
