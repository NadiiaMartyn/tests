include <iostream>
using namespace std;
double function()
{
    int n;
    int k = 0;
    cout << "enter k=";
    cin >> n;
    int i = 0;
    do {
        k++;
    } while (pow(k, 2) < n);
    cout << "k=" << k << endl;
    return 0;
}
int main()
{
    function();
    return 0;
}
