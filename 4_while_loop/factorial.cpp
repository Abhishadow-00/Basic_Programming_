#include <iostream>
using namespace std;
int main()
{
    int n, fac;
    cout << "enter a number: ";
    cin >> n;
    fac = 1;
    while (n > 0)
    {
        fac = fac * n;
        n--;
        cout << fac << endl;
    }

    int a;
    cout << "enter a number: ";
    cin >> a;

    while (a > 0)
    {
        a--;
        cout << a + 1;
    }
}