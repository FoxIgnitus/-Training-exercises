#include <iostream>
#include <string>
#include <fstream>

int main() {

    std::ifstream in;
    std::string line,buff;
  
    in.open("D:/projects/hometasks/string.txt");


    if (in.is_open()) {

        while(std::getline(in , buff)) {

            line = line + buff;

        }
        
    } else {

    std::cout << "can't read file" << "\n";

    }
    
    in.close();

    std::cout << line << "\n";

    system("pause");
    return 0;



}