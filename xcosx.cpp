#include <fstream>
#include <cmath>
#include <iostream>

int main() {

    double y;
    std::ofstream in;

    in.open("D:/projects/hometasks/cos.txt");

    if (in.is_open()) {

         for ( int i = 0 ; i < 361; ++i){

        y = i * cos(i);
        in << y << "\n";

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

   
    
    in.close();
    system("pause");
    return 0;



}