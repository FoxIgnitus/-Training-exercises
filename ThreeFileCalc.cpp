#include<iostream>
#include "calc.h"

int main() {

    int a, b, c;
    a = ReadNumber();
    b = ReadNumber();
    c = a + b;
    WriteAnswer(c);
    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;

}