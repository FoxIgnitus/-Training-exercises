#include <iostream>

int main() {

    float a[3][4] = { {5.0, 2.0, 0.0, 10.0}, {3.0, 5.0, 2.0, 5.0}, {20.0, 0.0, 0.0, 0.0} };
    float b[4][2] = { {1.2, 0.5}, {2.8, 0.4}, {5.0, 1.0}, {2.0, 1.5} };
    float c[3][2] = { {0.0, 0.0}, {0.0, 0.0}, {0.0, 0.0} };

    float mins, maxs, minc, maxc, allsum, allcom, all;

    mins = 10000;
    maxs = 0;
    minc = 10000;
    maxc = 0;
    int num[4];
    allsum = 0;
    allcom = 0;
    all = 0;
   

    for (int i = 0; i < 3; ++i) {

        for (int j = 0; j < 4; ++j) {
            
            c[i][0] = c[i][0] + a[i][j] * b[j][0] ;
            c[i][1] = c[i][1] + a[i][j] * b[j][1] ;

        }

    }

          for (int i = 0; i < 3; ++i) {

          all = all + c[i][1] + c[i][0];
          allsum = allsum + c[i][0];
          allcom = allcom + c[i][1];

          if (c[i][0] <= mins) {

              mins = c[i][0];
              num[0] = i + 1;

          }

          if (c[i][0] >= maxs) {

              maxs = c[i][0];
              num[1] = i + 1;

          }

          if (c[i][1] <= minc) {

              minc = c[i][1];
              num[2] = i + 1;

          }


          if (c[i][1] >= maxc) {

              maxc = c[i][0];
              num[3] = i + 1;

          }





      }


      std::cout << "all profit sum is " << allsum << "\n";
      std::cout << "all commission sum is " << allcom << "\n";
      std::cout << "all money sum is " << all << "\n";
      std::cout << "most money was earned by seller number " << num[1] << "\n";
      std::cout << "less money was earned by seller number " << num[0] << "\n";
      std::cout << "most commission was earned by seller number " << num[3] << "\n";
      std::cout << "less commission was earned by seller number  " << num[2] << "\n";


    system("pause");
    return 0;


}