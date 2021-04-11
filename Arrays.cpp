#include<iostream>
#include<string>

double getValue();
int getSize();
std::string getAnswer();

int main() {

    double min{INT_MAX}, max{INT_MIN}; 
    double average{0.0};
    int size;
    std::string answer;
    

    answer = "y";

    
    while(answer != "n") {

        size = getSize();
        double *array = new double[size];


        for (int i = 0; i < size; ++i) {

            array[i] = getValue();

        }


        for (int i = 0; i < size; ++i) {

            if (array[i] < min){

                min = array[i];

            }
            
        }


        for (int i = 0; i < size; ++i) {

            if (array[i] > max){

                max = array[i];

            }
 
        }


        for (int i = 0; i < size; ++i) {

            average = average + array[i];
            
        }


        average = average / size;
        std::cout << "min is " << min << "\n";
        std::cout << "max is " << max << "\n";
        std::cout << "average is " << average << "\n";


        average = 0;
        min = INT_MAX;
        max = INT_MIN;
        delete array;
        answer = getAnswer();

    }
    
    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;


}


int getSize() {

    while (true) {
        
        std::cout << "enter your size: ";
        int a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! It's incorrect size" << "\n";
            std::cin.ignore(32767, '\n'); 

        } else { 

            if (a > 0) {

                return a;

            } else {

                std::cout << "Error! It's incorrect size" << "\n";

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

double getValue() {

    while (true) {
        
        std::cout << "enter your number: ";
        double a;
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