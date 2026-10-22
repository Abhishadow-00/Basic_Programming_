#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter  index no: ";
    cin>>n;
    int a=0 , b=1 , c;

    if (n==0 ){
   cout<<a<<endl;
        return 0;
    }
    if(n==1){
     cout<<b<<endl;
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        c= a + b;
        a = b;
        b = c;
    }
    cout<<c;
}