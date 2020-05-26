#include <fstream>
#include <iostream>
#include <string>
#include <vector>

 struct student {

    std::string number;
    std::string name;
    std::string ratings;

    };

int main() {

    std::ifstream in;
    std::ofstream out;
    std::string line;
    std::vector<student> base;

    
    student swap;


    in.open("D:/projects/hometasks/students.txt");



    if (in.is_open()) {

        while(!in.eof()) {

            in >> swap.number;
            in >> swap.name;
            in >> swap.ratings;
            base.push_back(swap);

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    for (int i = 0; i < base.size(); ++i) {

        for (int j = 0; j < base.size()  - 1; ++j) {

                if (base[j].ratings[1] > base[i].ratings[1]) {

                    swap.number = base[i].number;
                    swap.name = base[i].name;
                    swap.ratings = base[i].ratings;
                    base[i].number = base[j].number;
                    base[i].name = base[j].name;
                    base[i].ratings = base[j].ratings;
                    base[j].number = swap.number;
                    base[j].name = swap.name;
                    base[j].ratings = swap.ratings;
            
                }
        }
    }

    out.open("D:/projects/hometasks/studentssorted.txt");

    if (out.is_open()) {

        for (int i = 0; i < base.size(); ++i) {

            out << base[i].number << " ";
            out << base[i].name << " ";
            out << base[i].ratings << "\n";

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

    out.close();


    std::cout << "database size is " << base.size() << " strings" << "\n";
    std::cout << "you can find sorted database in studentssorted.txt file" << "\n";
    system("pause");
    return 0;

}