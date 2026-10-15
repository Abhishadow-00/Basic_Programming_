#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
   for (int i = 2; i <= n; i++)     
    {
      //  for (int j = 2; j <= n; j++)       // isme loop n times chlega

       while(n%i==0)                        // yha ye loop tab tak chlega jab tak n%i==0 condition satisfy ho rha ho
        {
            if (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
    }
}