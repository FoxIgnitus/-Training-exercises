#include <iostream>
#include <fstream> 
#include <string>

int parser(std::string s);

int main() 
{
        std::fstream calc("D:/projects/hometasks/calc.txt", std::ios::out);
        std::string s;
        s = "";
        std::cout << "enter numbers: " ;
        std::cin >> s;
    
        if (calc.is_open()) {
 
            calc << s;
            calc.close();
            s = "";

        } else {

            std::cout << "can't open file" << "\n";
            system("Pause");
            return 0;

        }

        calc.open("D:/projects/hometasks/calc.txt", std::ios::in);

        
        if (calc.is_open()) {
 
            std::getline(calc, s);
            std::cout<< parser(s) << "\n" ;
            calc.close();
            system("Pause");
            return 0;

        } else {

            std::cout << "can't open file" << "\n";
            system("Pause");
            return 0;

        }
      
}


int parser (std::string s)
{
    int a, b;
    a = s.size();
    b = 0;

    for ( int i = 0; i < a; ++i) {

        b=b+s[i]-48;

    }

    return b;

}