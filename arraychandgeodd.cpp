#include <iostream>

void change(int*);

int main() {


    int *p;

    p = new int[12];

    for (int i = 0; i < 12; ++i){

        p[i] = i + 1; 

    }

    change(p);

    std::cout << "\n";

    for (int i = 0; i < 12; ++i){

        std::cout << p[i] << " "; 

    }

    delete [] p;

    system("pause");
    return 0;



}


void change(int* p) {

    int b;

    b = 0;

    for (int i = 0; i < 12; ++i){

        if ((p[i] % 2) != 0){

            p[i] = p[i] + 1;

        } else {

            p[i] = p[i] - 1;

        }

    }

}