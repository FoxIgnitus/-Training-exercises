#include<iostream>
#include<string>



double getValue(double &);
int getSize();
std::string getAnswer();




int main(){
    
    std::string answer {"y"};
    int new_array_size = 0;
    int first_array_size = 0;
    int second_array_size;
    int temp;
    double check_order{INT_MIN};


    while(answer != "n") {

        first_array_size = getSize();
        double *first = new double[first_array_size];


        for (int i = 0; i < first_array_size; ++i){

            first[i] = getValue(check_order);

        }

        check_order = INT_MIN;
        second_array_size = getSize();
        double *second = new double[second_array_size];


        for (int i = 0; i < second_array_size; ++i){

            second[i] = getValue(check_order);

        }


        new_array_size = first_array_size + second_array_size;
        double *new_array = new double[new_array_size];


        for(int i = 0; i < new_array_size/2; ++i){

            new_array[i] = first[i];

        }


        delete first;


        for(int i = new_array_size/2; i < new_array_size; ++i){

            new_array[i] = second[i - new_array_size/2];

        }

        
        delete second;


        for(int i = 0; i < (new_array_size - 1); ++i){

            int counter_swap = 0;

            for(int j = 0; j < (new_array_size - 1 - i); ++j){

                if (new_array[j] > new_array[j+1]){

                    temp = new_array[j+1];
                    new_array[j+1] = new_array[j];
                    new_array[j] = temp;
                    counter_swap = 1;

                }
            }

            if(counter_swap == 0){

                    break;

            }

        }


        for (int i = 0; i < new_array_size; ++i){

            std::cout << new_array[i] << "\n";

        }



        delete new_array;
        first_array_size = 0;
        second_array_size = 0;
        new_array_size = 0;
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


double getValue(double &check_order) {

    while (true) {
        
        std::cout << "enter your number: ";
        double a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! This isn't a correct number! " << "\n";
            std::cin.ignore(32767, '\n'); 

        } else {

            if(a >= check_order) {

                check_order = a;
                return a;

            } else {

                std::cin.clear();
                std::cout << "Error! This isn't a correct number! " << "\n";
                std::cin.ignore(32767, '\n');

            }
        }   
    }
}