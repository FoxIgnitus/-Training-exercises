#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctype.h>

int main()
{
    char a;
    std::ifstream in("D:/projects/test.txt");

    while (!in.eof()) {
        in >> a;

        if (isdigit(a)) {
            std::cout << a << "\n";
        }

    }
    
    return 0;

}
