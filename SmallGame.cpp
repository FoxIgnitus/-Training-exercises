#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

int getRandomNumber();
int getValue();
std::string getAnswer();

int main() {

    int start_number;
    int player_number;
    int correct_place_counter;
    int correct_number_counter;
    int temp;
    std::string answer;

    srand(static_cast<unsigned int>(time(0)));
    answer = "y";
    correct_place_counter = 0;
    correct_number_counter = 0;
    temp = 0;

    while(answer == "y"){

        start_number = getRandomNumber();

        std::cout << "computer thought of a three digit number \n";

        while(true){

            player_number = getValue();

            if ((player_number / 100) == (start_number / 100)){

                correct_place_counter += 1;

            }

            if ((player_number % 10) == (start_number % 10)){

                correct_place_counter += 1;

            }

            if ((player_number / 10 % 10) == (start_number / 10 % 10)){

                correct_place_counter += 1;

            }

            if (correct_place_counter == 3) {

                break;

            }

            while (player_number > 0){

                temp = player_number % 10;
                player_number = player_number / 10;
                if ((temp == (start_number % 10)) || (temp == (start_number / 10 % 10)) || (temp == (start_number / 100))){

                    correct_number_counter += 1;

                }
            

            }

            std::cout << correct_number_counter << " digit(s) correct \n";
            std::cout << "on right plases " << correct_place_counter << " digit(s) \n";
            correct_place_counter = 0;
            correct_number_counter = 0;
            temp = 0;

        }

        std::cout << "you are winner!" << " the number was " << start_number << "\n";
        correct_place_counter = 0;
        correct_number_counter = 0;
        temp = 0;
        player_number = 0;
        start_number = 0;

        answer = getAnswer();

    }

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;

}


int getRandomNumber(){

    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); 
    
    return static_cast<int>(rand() * fraction * (999 - 100 + 1) + 100);
}


int getValue() {

    while (true) {
        
        std::cout << "enter your number: ";
        int a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! This isn't a number! " << "\n";
            std::cin.ignore(32767, '\n'); 

        } else {

            return a;

        }   
    }
}


std::string getAnswer() {

    while (true) {
        
        std::cout << "do you want to play again? (y/n):";
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