#include <iostream>
#define MAX 100
using namespace std;

char* input()
{
    char* line = new char[MAX];
    cout << "Input a string: ";

    cin.getline(line, MAX);
    return line;
}

bool isNum(char symbol)
{
    return (symbol > '0' && symbol < '9');
}

char* removeNumberRep(char* str)
{
    char* newStr = new char[MAX];
    int j = 0;
    bool isRep;

    for (int i = 0; str[i] != '\0'; i++)
    {
        isR = isNum(str[i]) && (str[i] == str[i - 1]);

        if (isRep)
        {
            continue;
        }
        newStr[j++] = str[i];
    }

    newStr[j] = '\0';
    return newStr;
}

int main()
{
    char* line = new char[MAX];
    line = input();
    cout << removeNumberRep(line) << endl;

    system("pause");
    return 0;
}
