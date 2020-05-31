#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main() {
    
  int size = 80, height = 21;

  std::vector<std::string> chart(height, std::string(size, ' '));
  chart[height/2] = std::string(size, '-');

  for(int i = 0; i < size; ++i) {

    chart[static_cast<int>(std::round(10 * std::sin(i / 4.5) + 10))][i] = 'x';

  }

  for(auto &&s : chart) {

    std::cout << s << '\n';

  }

  system("pause");

}