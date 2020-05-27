#include <iostream>

int main() {

    double **p;


    p = new double * ;
    *p = new double;
    **p = 2.0;


    std::cout << **p << "\n";

    delete *p;
    delete p;


    system("pause");
    return 0;
    
}