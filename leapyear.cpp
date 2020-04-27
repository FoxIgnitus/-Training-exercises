#include <iostream>
#include <string>

int main()
{
    int year;
    std::string Type="";
    std::cout << "enter a year:";
    std::cin >> year;

    if (year%4!=0) {
        Type="common";
    } else {
        if (year%100!=0) {
             Type="leap";
        } else { if (year%400!=0) {
             Type="common";
            } else {
                 Type="leap"; 
            }
        }
    } 
    std::cout << Type << "\n";  
    return 0;  
} 
