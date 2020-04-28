#include <string>
#include <iostream>

int main()
{
    int p;
    char nt;
    std::string line;
    std::cout << "enter string: ";
    std::cin >> line;
    p = line.size();
    
    for (int i = 0; i < p ; ++i) {

        for (int J = i+1; J < i; ++J) {

                if (line[J] > line[i]) {
                    nt = line[i];
                    line[i] = line[J];
                    line[J] = nt;
                }
        }
    }
    
    std::cout << line << "\n";
    system("Pause");
    return 0;
}

