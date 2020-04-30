#include <iostream>

int sign(int a);

int main()
{

    int a;
    std::cout << "enter number: " ;
    std::cin >> a;
    sign(a);
    system("Pause");
    return 0;

}

int sign(int a)
{

    if (a == 0) {

        std::cout << "zero" << "\n";

    } else {

        if (a > 0) {

            std::cout << "positive" << "\n";

        } else {

             std::cout << "negative" << "\n";

        } 

    }

    return 0;
}