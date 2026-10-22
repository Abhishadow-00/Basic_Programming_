#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a binary number: ";
    cin >> n;
    int deci = 0;
    for (int pow= 1; n > 0; pow *= 2)
    {
        int rem = n % 10;
        if (rem != 0 && rem != 1)
        {
            cout << "n is not binary no";
            break;
        }
        deci = deci + rem * pow;
        n /= 10;
    }
    cout << "n in decimal form is: "<<deci;
}