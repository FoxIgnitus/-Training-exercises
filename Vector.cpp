#include<iostream>
#include<vector>


char getAnswer();

int getValue();

int main() {

    std::vector<int> sequence;
    char end_seq;
    char answer;
    int min;

    answer = 'y';
    end_seq = 'y';
    min = INT_MAX;

    while(answer != 'n') {


        while(end_seq != 'n') {

            sequence.push_back(getValue());
            end_seq = getAnswer();

        }

        for (int i = 0; i < sequence.size(); ++i) {

            if(sequence[i] < min) {

                min = sequence[i];

            }


        }

        if(min < 0) {

            std::cout << "error! Your sequence has negative number!" << "\n";

        } else {

            std::cout << "minimal number in your sequence is " << min <<"\n";

        }

        sequence.clear();
        min = INT_MAX;
        end_seq = 'y';
        answer = getAnswer();



    }





}



char getAnswer() {

    while (true) {
        
        std::cout << "do you want to continue?(y/n): ";
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


int getValue() {

    while (true) {
        
        std::cout << "enter next number in sequence: ";
        int a;
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! This isn't a valid number! " << "\n";
            std::cin.ignore(32767, '\n'); 

        } else {

            return a;

        }   
    }
}