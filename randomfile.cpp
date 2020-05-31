#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

    int arrr[50];
    std::ofstream in;

    srand(time(0));
    in.open("D:/projects/hometasks/numb.bin", std::ios::binary);

    for (int i = 0; i < 50; ++i) {


        arrr[i] = std::rand();


    }

    if (in.is_open()) {

        for (int i = 0; i < 50; ++i) {


            in << arrr[i] << "\n" ;


        }
       

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    system("pause");
    return 0;

}