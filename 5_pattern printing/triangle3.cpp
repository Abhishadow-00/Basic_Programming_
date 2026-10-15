
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col < n - row-1; col++)
        {
            cout << "  ";// yha jitna space " " ke andar  denge utna hi jagar niche star wale  section mai " " iske andar dena hoga;
        }
       
       
      for (int col = 0; col < row + 1; col++)
        {
            cout << " *";
        }
        cout << endl;
    }
}
    
