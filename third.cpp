#include <fstream>
#include <iostream>

int main(){

    std::ifstream in;
    int counter;
    long int b;

    counter = 0;
    
    in.open("D:/projects/hometasks/numb.bin", std::ios::binary);

    if (in.is_open()) {

        while(!in.eof()){

            in >> b;

            if ( b % 3 == 0){

                counter = counter + 1;

            }

        }
       

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    std::cout << counter << "\n";
    system("pause");
    return 0;

}
