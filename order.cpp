#include<iostream>

int main()
{
	int arr [10]= {0, 0, 0, 0, 0, 0, 0, 0 ,0, 0};
	std::cout << " enter starting number: ";
	std::cin >> arr [0];

	for ( int i = 1; i < 10 ; ++i) {

		arr[i] = arr[i-1] + 1;
		 	
	}
	
	for ( int i = 0; i < 10 ; ++i) {

		std::cout << arr[i] << "\n";
			
	}
}