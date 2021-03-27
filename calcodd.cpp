#include<iostream>
#include<string>

int getValue();
std::string getAnswer();

int main() {

    int sum;
    int quantity;
    std::string answer;

    quantity = 0;
    sum = 0;
    answer = "y";

    while(answer != "n") {

        std::cout << "\n";
        std::cout << "enter numbers quantity: " ;
        quantity = getValue();

        for(int i = 1; i <= quantity; ++i) {

            sum = sum + 2*i;

        }

        std::cout << "your sum is " << sum << "\n";

        sum = 0;
        quantity = 0;
        answer = getAnswer();

    }

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;


}



int getValue() {

    while (true) {
        
        int a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! This isn't correct data! " << "\n";
            std::cin.ignore(32767, '\n'); 
            std::cout << "enter again: ";

        } else {

            return a;

        }   
    }
}


std::string getAnswer() {

    while (true) {
        
        std::cout << "do you want to calculate again? (y/n):";
        std::string a;
        std::cin >> a;
 
        if (std::cin.fail()) {

            std::cin.clear();
            std::cin.ignore(32767, '\n'); 

        } else { 
                   
            if((a == "y") || (a == "n")){

                return a;

            } else {

                std::cin.clear();
                std::cin.ignore(32767, '\n');

            }
        }
    }
}