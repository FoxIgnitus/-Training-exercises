#include <iostream>
#include <string>
#include <vector>

int main() {

    std::string number;
    int counter, temp;

    std::vector<char> map;

    std::cout << "enter string: ";
    std::cin >> number;

    if (number.empty()) {


        std::cout << "string is empty" << "\n" ;


    } else {

        counter = 1;
        map.push_back(number[0]);

        for (int i = 0; i < number.size(); ++i) {

                    for (int j = 0; j < map.size() ; ++j) {

                            if (number[i] != map[j]) {

                                temp = i;

                            } else {

                                temp = 0;

                            }

                    }

                    if (temp != 0) {

                        map.push_back(number[temp]);
                        counter = counter + 1;

                    }

        }

        
    std::cout << counter << "\n";

    }
    

    system("pause");
    return 0;



}