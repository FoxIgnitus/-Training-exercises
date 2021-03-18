#include<iostream>


double getValue();
char getAnswer();

int main(){

    double cost_per_gallon;
    double mileage;
    double mpg;
    double total_cost;
    char answer = {'y'};

    while(answer != 'n') {

        std::cout << "write your ride length"  << "\n"   ;
        mileage = getValue();
        std::cout << "write your mpg"  << "\n" ;
        mpg = getValue();
        std::cout << "write your fuel price" << "\n"  ;
        cost_per_gallon = getValue();
        total_cost = mileage / mpg * cost_per_gallon;
        std::cout << "your total cost is: " << total_cost << "\n";
        total_cost = 0.0;
        cost_per_gallon = 0.0;
        mileage = 0.0;
        answer = getAnswer();
        std::cout << "\n";

    }



    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;



}


double getValue() {

    while (true) {
        
        std::cout << "enter your data: ";
        double a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! This isn't correct data! " << "\n";
            std::cin.ignore(32767, '\n'); 

        } else {

            return a;

        }   
    }
}


char getAnswer() {

    while (true) {
        
        std::cout << "do you want to try another ride? (y/n):";
        char a;
        std::cin >> a;
 
        if (std::cin.fail()) {

            std::cin.clear();
            std::cin.ignore(32767, '\n'); 

        } else { 
                   
            if((a == 'y') || (a == 'n')){

                return a;

            } else {

                std::cin.clear();
                std::cin.ignore(32767, '\n');

            }
        }
    }
}
