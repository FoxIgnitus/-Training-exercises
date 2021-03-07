#include <iostream>
 
double getUserValue() {
	while (true) {
		double value;
		std::cin >> value;
 
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "error! \n";
			continue; 
		}
 
		if (value < 0) 
		{
			std::cout << "error! Negative! \n";
			continue; 
		}
 
		return value;
	}
 
}

int main() {
	
	std::cout << "enter sequence: ";
 
	double minElement = DBL_MAX;
 
	while (std::cin.peek() != '\n')
	{
		double element = getUserValue();
		minElement = (element < minElement) ? element : minElement;
	}
 
	std::cout << "Min: " << minElement << "\n";
}