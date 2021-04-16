#include<iostream>
#include<string>


int getTime();
std::string getAnswer();


int main() {

    int time{0};
    int new_time_hours{0};
    int new_time_minutes{0};
    std::string answer {"y"};

    while(answer != "n"){

        time = getTime();
        new_time_hours = time / 60;
        std::cout << new_time_hours;
        new_time_minutes = time % 60;
        std::cout << new_time_minutes << "\n";
        std::cout << "time is " << new_time_hours << "h. " << new_time_minutes << "minutes. \n";


        new_time_hours = 0;
        new_time_minutes = 0;
        time = 0;
        answer = getAnswer();

    }


    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;


}


int getTime() {

    while (true) {
        
        std::cout << "enter your time: ";
        int a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! It's incorrect time" << "\n";
            std::cin.ignore(32767, '\n'); 

        } else { 

            if (a > 0) {

                return a;

            } else {

                std::cout << "Error! It's incorrect time" << "\n";

            }
        }   
    }
}


std::string getAnswer() {

    while (true) {
        
        std::cout << "do you want to find out truth again? (y/n):";
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