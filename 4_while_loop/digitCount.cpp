#include<iostream>
using namespace std;
int main(){

    int n ,count=0 ;
    cout<<"enter a number: ";
    cin>>n  ;

    while (n>0)
    {
    
    n/=10;
     count = count + 1;

}
     cout<<count;


}