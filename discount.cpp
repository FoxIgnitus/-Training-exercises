#include<iostream>

double getValue();
char getAnswer();

int main(){

    double before_discount_cost;
    double after_discount_cost;
    char answer;
    const double big_discount = {0.95};
    const double small_discount = {0.97};

    while(answer != 'n') {

        before_discount_cost = getValue();

        if(before_discount_cost <= 500) {

            after_discount_cost = before_discount_cost;
            std::cout << "you dont have discount" << "\n";
            std::cout << "your price is: " << after_discount_cost << "\n";
            
        }

        if((before_discount_cost > 500) & (before_discount_cost <= 1000)) {

            after_discount_cost = before_discount_cost * small_discount;
            std::cout << "you have 3% discount" << "\n";
            std::cout << "your price is: " << after_discount_cost << "\n";
            
        }

        if(before_discount_cost > 1000) {

            after_discount_cost = before_discount_cost * big_discount;
            std::cout << "you have 5% discount" << "\n";
            std::cout << "your price is: " << after_discount_cost << "\n";
            
        }

        before_discount_cost = 0.0;
        after_discount_cost = 0.0;
        answer = getAnswer();

    }

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;

}


double getValue() {

    while (true) {
        
        std::cout << "enter your purchase cost: ";
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
        
        std::cout << "do you want to try another purchase? (y/n):";
        char a;
        std::cin >> a;
 
        if (std::cin.fail()) {

            std::cin.clear();
            std::cin.ignore(32767, '\n'); 

        } else { 
                   
            if((a == 'y') || (a == 'n')){

                std::cin.ignore(32767, '\n');
                return a;

            } else {

                std::cin.clear();
                std::cin.ignore(32767, '\n');

            }
        }
    }
}