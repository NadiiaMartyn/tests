#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

long double fact(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int* a;
    int i, n, k, sum;

    printf("N= ");
    scanf("%d", &n);


    a = (int*)malloc(n * sizeof(int));


    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    a[i] = 2 * a[i - 1] + fact(n);

    for (k = 1; k <= n; k++)
    {
        sum += 2 * k + 1;
    }

    cout << sum;

    getchar();
    return 0;
}
