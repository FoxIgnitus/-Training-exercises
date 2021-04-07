#include <iostream>
#include <string>
 
 
const std::string morseAlphabet[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",
	".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
	"...-",".--","-..-","-.--","--.." };
 
char Alphabet[26];
 
void convert() {

	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.length(); i++) {

		for (int n = 0; n < 26; n++) {

			

			if (input[i] == Alphabet[n]) {

				std::cout << morseAlphabet[n];

			}
			 

		}

	}
}

 
int main() {

	for (int i = 0; i < 26 ; i++) { 
        
        Alphabet[i] = 97 + i;
		
        
    }
 
	convert();

    std::cin.clear(); 
    std::cin.ignore(32767, '\n');
    std::cin.get();
    return 0;

}