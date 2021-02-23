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

int ReadNumber() {
    
    int a;
    std::cin >> a;
    return a;

}

void WriteAnswer(int c){

    std::cout << "Answer is " << c << "\n";

}