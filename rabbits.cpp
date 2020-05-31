#include <fstream>
#include <iostream>
#include <vector>
#include <string>

struct rabbit{

        std::string s;
        int age;
        int weight;

};

int main() {

    int count;
    std::vector<rabbit> base;
    rabbit temp;
    std::ofstream in;


    std::cout << "how many rabbits do you have?" << "\n";
    std::cin >> count;

    std::cout << "enter their data" << "\n";

    for (int i = 0; i < count ; ++i){ 

        std::cout << "rabbit" << i + 1 << "\n";
        std::cin >> temp.s;
        std::cin >> temp.age;
        std::cin >> temp.weight;
        base.push_back(temp);

    }

    in.open("D:/projects/hometasks/rabbit.bin", std::ios::binary);

    if (in.is_open()) {

        for (int i = 0; i < count; ++i) {

            in << base[i].s << " " ;
            in << base[i].age << " " ;
            in << base[i].weight ;
            in << " " ;

        }
       

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    system("pause");
    return 0;

}