#include<iostream>

double getValue();



int main() {

  double price;
  double starting_price;


  starting_price = getValue();


  for(int i = 1; i <= 10; ++i) {

      price = starting_price * i * 0.1;
      std::cout << "price for " << 100*i << " grams is " << price << "\n";

  }


    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;


}


double getValue() {

    while (true) {
        
        std::cout << "enter your price: ";
        double a;
        std::cin >> a;
 
        if (std::cin.fail()) {

            std::cin.clear();
            std::cout << "Error! This isn't a correct price! " << "\n";
            std::cin.ignore(32767, '\n'); 

        } else {

               return a;

        }   
    }
}