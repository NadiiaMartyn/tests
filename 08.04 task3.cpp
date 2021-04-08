#include <iostream> 
#include <iomanip> 
#include <ctime>
using namespace std;

void transpose(int** mat, int** tr, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tr[i][j] = mat[j][i];
        }
    }
}


bool isSymmetric(int** mat, int N)
{
    int** tr;
    tr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        tr[i] = new int[N];
    }
    transpose(mat, tr, N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] != tr[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void Input_Matrix(int** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 20;
        }
    }
}

void Print_Matrix(int** arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
}

bool isSingle(int** arr, int n)
{
    int counter_1 = 0, counter_0 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] == 1)
            {
                counter_1++;
            }
            else if (arr[i][j] == 0)
            {
                counter_0++;
            }
        }
        cout << endl;
    }

    if ((n * n - n) == counter_0 && n == counter_1)
    {
        return true;
    }
    return false;
}

bool isTriangular(int** arr, int n)
{
    int k = 0, s = 0, o = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                s++;
            }
            if (arr[n - i - 1][n - j - 1] != 0)
            {
                o++;
            }
            k++;
        }
    }
    if ((s == k) || (o == k))
    {
        return true;
    }
    return false;
}


int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int** arr, n;
    cout << "Розмiр квадратної матрицi: ";
    cin >> n;
    cout << "_________________________________________________" << endl;
    arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    Input_Matrix(arr, n);
    Print_Matrix(arr, n);

    if (isSingle(arr, n))
    {
        cout << "Одинична" << endl;
    }
    else
    {
        cout << "Не одинична" << endl;
    }


    if (isSymmetric(arr, n))
    {
        cout << "Симетрична" << endl;
    }
    else
    {
        cout << "Не симетрична" << endl;
    }

    if (isTriangular(arr, n))
    {
        cout << "Трикутна" << endl;
    }
    else
    {
        cout << "Не трикутна" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];

    }
    delete[] arr;
    return 0;
}
