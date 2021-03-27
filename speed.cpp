#include<iostream>
#include<string>

double getValue();
std::string getAnswer();

int main() {
    double length, time, speed;
    std::string answer;

    length = 0;
    time = 0;
    speed = 0;
    answer = "y";

    while(answer != "n") {

        std::cout << "\n";
        std::cout << "enter distanse: " ;
        length = getValue();
        std::cout << "enter time in second: " ;
        time = getValue();

        speed = length / (time) * 3600 / 1000;
        std::cout << "your speed is " << speed << "km/h" << "\n";

        speed = 0;
        length = 0;
        time = 0;
        answer = getAnswer();

    }

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;


}



double getValue() {

    while (true) {
        
        double a;
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