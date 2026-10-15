#include <iostream>
using namespace std;
int main()
{

    // int n;
    // cout << "enter a number:";
    // cin >> n;

    // while (n > 0)
    // {
    //     cout << "*" << " ";
    //     n--;
    // }
    // cout << endl;

    // // by for loop

    // int x;
    // cout << "enter a number again:";
    // cin >> x;
    // for (int i = 0; i < x; i++)
    // {
    //     cout << "*" << " ";
    // }
    // cout<<endl;

    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int col = 0; col < n; col++)
    {
        for (int row = 0; row < n; row++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
