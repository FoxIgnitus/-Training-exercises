#include <iostream>
#include <string>

int main() {

    std::string number;
    int counter;

    std::cout << "enter number: ";
    std::cin >> number;
    counter = 1;

    for (int i = 0; i < number.size(); ++i) {

                if (number[0] != number[i]) {

                    counter = counter + 1;
            
                }
    }

    std::cout << counter << "\n";
    system("pause");
    return 0;



}