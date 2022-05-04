#include <iostream>
#include <time.h>
using namespace std;
int main()
{
     setlocale(LC_ALL, "ru");
     float result, sum = 0, i, b, c;
     mark:
     cout <<"Введите i, b, c:" << '\n';  
     cin >> i;
     cout << "i:" << i << '\n';
     cin >> b;
     cout << "b:" << b << '\n';
     cin >> c;
     cout << "c:" << c << '\n';
     clock_t start = clock();
     getchar();
     for (int n1 = 1; n1 < 100000001; n1++)
     {
          sum += b * 2 + c - i;
          
     }
     clock_t end = clock();
     double seconds = (double)(end - start) / CLOCKS_PER_SEC;
     cout << "The time:" << seconds << '\n';
     cout << "sum:" << sum << '\n';
     result = i + sum;
     cout << "f(i+1):" << result << '\n';
     return 0;
}