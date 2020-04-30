#include <cmath>
#include <iostream>
#include <string>

int curcle();

int triangle();

int rectangle();


int main() {

    std::string s;

    std::cout << "enter type of figure: ";
    std::cin >> s;

    if ( s == "curcle") {

        curcle();

    } else if (s == "triangle") {

        triangle();

    } else if (s == "rectangle") {

        rectangle();

    } else {

        std::cout << "I don't know this figure" << "\n";

    }
    
    system("Pause");
    return 0;

}

int curcle() {

    double r, square;
    const double p = 3.14;
    std::cout << "enter radius: ";
    std::cin >> r;
    square = p * pow(r , 2);
    std::cout << "square is " << square << "\n";
    return 0;

}

int triangle() {

    double a, h, square;
    std::cout << "enter height: ";
    std::cin >> h;
    std::cout << "enter length of a: ";
    std::cin >> a;
    square = h * a / 2;
    std::cout << "square is " << square << "\n";
    return 0;


}

int rectangle() {

    double a, b, square;
    std::cout << "enter length of a: ";
    std::cin >> a;
    std::cout << "enter length of b: ";
    std::cin >> b;
    square = b * a;
    std::cout << "square is " << square << "\n";
    return 0;

}
