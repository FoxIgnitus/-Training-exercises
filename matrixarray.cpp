#include <iostream>
#include <stdlib.h>
#include <time.h>

void full( int**, int, int);
void display( int**, int, int);

int main() {

    int **p, a, b;

    srand(time(0));
    std::cout << "enter rows number: ";
    std::cin >> a;
    std::cout << "enter columns number: ";
    std::cin >> b;
    p = new int* [a];
    
    for( int i = 0; i < a; ++ i){

        p[i] = new int [b];

    }



    
    full(p, a, b);
    display(p, a, b);


    for( int i = 0; i < a; ++ i){

       delete[] p[i];

    }

    delete[] p;

    system("pause");
    return 0;

}


void full( int** p, int a, int b){

    for( int i = 0; i < a; ++i){

        for( int j = 0; j < b; ++j){

         p[i][j] = 10 + std::rand() % 40;

        }

    }

}

void display( int** p, int a, int b){

    for( int i = 0; i < a; ++i){

        for( int j = 0; j < b; ++j){

         std::cout << p[i][j] << " ";

        }

        std::cout << "\n";

    }

}


