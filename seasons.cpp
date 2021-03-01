#include<iostream>

int main() {

    int number;
    char answer;

    answer = 'y';

    while (answer != 'n') {

        std::cout << "enter your month number: ";
        std::cin >> number;
        std::cout << "\n";

        switch(number) {

            case 1:

                std::cout << "January" << "\n";
                break;

            case 2:

                std::cout << "February" << "\n";
                break;
                
            case 3:

                std::cout << "March" << "\n";
                break;
                                
            case 4:

                std::cout << "April" << "\n";
                break;
                                                
            case 5:

                std::cout << "May" << "\n";
                break;

            case 6:

                std::cout << "June" << "\n";
                break;

            case 7:

                std::cout << "Jule" << "\n";
                break;
                
            case 8:

                std::cout << "August" << "\n";
                break;
                                
            case 9:

                std::cout << "September" << "\n";
                break;
                                                
            case 10:

                std::cout << "October" << "\n";
                break;

            case 11:

                std::cout << "November" << "\n";
                break;
                                                
            case 12:

                std::cout << "December" << "\n";
                break;

            default:

                std::cout << "This month doesn't exist" << "\n";
                break;
        }

        std::cout << "do you want to try another month? (y/n):";
        std::cin >> answer;
                
        }

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;

    }


