#include <fstream>
#include <iostream>

int main() {

    long int a, b;
    int d;
    std::ifstream in("D:/projects/hometasks/numb.bin", std::ios::binary); 

    b = 0;
    d = 0;

    if (in.is_open()) {

        while(!in.eof()) {

           in >> a;
           b = b + a;
           d = d + 1;

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    std::cout << "sum is " << b << "\n";
    std::cout << "count is " << d << "\n";
    system("pause");
    return 0;


}