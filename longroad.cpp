#include<iostream>


double getValue();


int main(){

    double road;
    const double multiplier {1.0668};
    double total_road;

    road = getValue();
    total_road = road * multiplier;
    std::cout << "road length in versts is" << total_road;

    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;


}


double getValue() {

    while (true) {
        
        double a;
        std::cout << "enter road length in kilometers: ";
        std::cin >> a;
 
        if (std::cin.fail())
        {

            std::cin.clear();
            std::cout << "Error! This isn't correct data! " << "\n";
            std::cin.ignore(32767, '\n'); 
            std::cout << "enter again: ";

        } else {

            return a;

        }   
    }
}
