#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<cstdlib>
using namespace std;

int main()
    SetConsoleOutputCP(1251);
SetConsolecp(1251);
double sum = 0, s = 0, eps = 0.00001;
double n = 2.0;
int i = 1;
do {
    s = sum;
    sum += i / n;
    n *= -2.0;
    i++;
} while (sum - s > eps);
cout << s << endl;
system("pause");
return 0;

}

