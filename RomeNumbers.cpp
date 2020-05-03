#include <iostream>
#include <string>

int transform(char);

int main() {

    int arabian, a,b;
    std::string rome;
    arabian = 0;
    char c, d;
    

    std::cout << "enter rome number: ";
    std::cin >> rome;

    for (int i = 0; i < rome.size() ; ++i) {

        if (i < (rome.size() - 1)) {

            c = rome[i];
            d = rome[i+1];
            a = transform(c);
            b = transform(d);

            if (a < b) {

                arabian -= a;

            } else {

                arabian += a;

            }

        } else { 

           c = rome[i];
           a = transform(c);
           arabian += a;

        }

    }

    std::cout << "your number in arabian form is " << arabian << "\n";
    system("pause");
    return 0;

}

int transform(char a) {

    int b;
    b = 0;

    switch (a) {

        case 'I':
            b = 1;
            break;
        case 'V':
            b = 5;
            break;
        case 'X':
            b = 10;
            break;
        case 'L':
            b = 50;
            break;
        case 'C':
            b = 100;
            break;
        case 'D':
            b = 500;
            break;
        case 'M':
            b = 1000;
            break;
        Default:
            b = 0;
            break; 
    }
    
    return b;

}