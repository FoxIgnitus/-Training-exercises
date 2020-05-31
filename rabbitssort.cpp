#include <fstream>
#include <iostream>
#include <vector>
#include <string>

struct rabbit{

        std::string s;
        int age;
        int weight;

};

int main(){

    std::vector<rabbit> base;
    rabbit temp;
    std::ifstream in;

    in.open("D:/projects/hometasks/rabbit.bin", std::ios::binary);

     if (in.is_open()) {

        while(!in.eof()) {

           in >> temp.s;
           in >> temp.age;
           in >> temp.weight;
           base.push_back(temp);
           

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    temp.age = 0;
    temp.weight = 0;

    for (int i = 0; i < base.size(); ++i){

        if( (base[i].age >= temp.age) && (base[i].weight > temp.weight) ) {

            temp = base[i];

        }


    }

    std::cout << temp.s << " " << temp.age << " " << temp.weight << "\n";
    system("pause");
    return 0;




}