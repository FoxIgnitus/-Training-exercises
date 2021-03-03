#include<iostream>
#include<string>

char getAnswer(); 


int main() {

    std::string sandwich;
    int left = 0;
    int right = 0;
    int counter = 0;
    int middle_start = 0; 
    int middle_end = 0; 
    char example;
    char example_middle;
    char Answer;
    bool correct_center = true;

    Answer = 'y';

    while (Answer != 'n') { 

        std::cout << "write your sandwich: ";
        std::cin >> sandwich;
        example = sandwich[0];
        

        while( sandwich[counter] == example ) {

            counter += 1;

        }
        
        left = counter;
        counter = sandwich.length() - 1;

        while( sandwich[counter] == example ) {

            counter -= 1;
            right += 1;

        }

        middle_start = left;
        middle_end = sandwich.length() - right;


        example_middle = sandwich[middle_start];

        for(int i = middle_start; i < middle_end; ++i) {

            if(sandwich[i] != example_middle) {

                correct_center = false;

            }

        }

        if( left == sandwich.length() ) {

            std::cout << "your sandwich is incorrect" << "\n"; 


        } else { 
            
            if( left != right ){

             std::cout << "your sandwich is incorrect" << "\n";
             
            } else { 
                 
                if( correct_center == false ){

                    std::cout << "your sandwich is incorrect" << "\n";

                } else {

                std::cout << "your sandwich is correct" << "\n";

                }
            }

        }

        left = 0;
        right = 0;
        counter = 0;
        middle_start = 0; 
        middle_end = 0; 
        correct_center = true;

        
        Answer = getAnswer();


       
    }

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();

    return 0;

}


char getAnswer() {

    while (true) {
        
        std::cout << "do you want to try another month? (y/n):";
        char a;
        std::cin >> a;
 
        if (std::cin.fail()) {

            std::cin.clear();
            std::cin.ignore(32767,'\n'); 

        } else { 
                   
            if((a == 'y') || (a == 'n')){

                return a;

            } else {

                std::cin.clear();
                std::cin.ignore(32767,'\n');

            }
        }
    }
}