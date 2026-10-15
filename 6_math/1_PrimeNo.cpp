
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: "; 
    cin >> n;
    bool isprime = true;

    if (n < 2)
    {
        //   cout<<"not prime";

         isprime = false; 
    }

    for (int i = 2; i < n; i++)    // or we  can use (i*2 < n) in condition 
    {
        if (n % i == 0)
        {
            // cout << "not prime" << endl;

            isprime = false;
            break;
        }
    }
    // cout << "prime no";

    if (isprime == true)
    {
        cout << "prime no";
    }
    else
    {
        cout << " not prime no";
    }
}