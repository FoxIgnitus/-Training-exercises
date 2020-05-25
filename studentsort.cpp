#include <fstream>
#include <iostream>
#include <string>

 struct student {

    std::string number;
    std::string name;
    std::string ratings;

    };

int main() {

    std::ifstream in;
    std::ofstream out;
    std::string line;
    int n;

    std::cout << "enter number of strings: ";
    std::cin >> n;

    student arr[n];
    student swap;


    in.open("D:/projects/hometasks/students.txt");



    if (in.is_open()) {

        for (int i = 0; i < n; ++i) {

            in >> arr[i].number;
            in >> arr[i].name;
            in >> arr[i].ratings;

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

    in.close();

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n  - 1; ++j) {

                if (arr[j].ratings[1] > arr[i].ratings[1]) {

                    swap.number = arr[i].number;
                    swap.name = arr[i].name;
                    swap.ratings = arr[i].ratings;
                    arr[i].number = arr[j].number;
                    arr[i].name = arr[j].name;
                    arr[i].ratings = arr[j].ratings;
                    arr[j].number = swap.number;
                    arr[j].name = swap.name;
                    arr[j].ratings = swap.ratings;
            
                }
        }
    }

    out.open("D:/projects/hometasks/studentssorted.txt");

    if (out.is_open()) {

        for (int i = 0; i < n; ++i) {

            out << arr[i].number << " ";
            out << arr[i].name << " ";
            out << arr[i].ratings << "\n";

        }

    } else {

        std::cout << "can't open file" << "\n";

    }

    out.close();


    system("pause");
    return 0;

}