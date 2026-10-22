#include <iostream>
using namespace std;

int main() {
    int n, ans =0;
    cout<< "enter a mnumber:";
    cin>>n;
   int place =1;
   while(n>0)
    {
   int rem =  n%2;
   ans = ans + rem * place;
    n/=2;
    place*=10;
    }
    cout<<ans;

    
}