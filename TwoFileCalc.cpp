#include<iostream>

int ReadNumber();
void WriteAnswer(int c);

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