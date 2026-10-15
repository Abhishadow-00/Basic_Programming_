#include<iostream>
using namespace std;
int main(){

    // by WHILE LOOP
   
    int n,b=0;
    cout <<"enter a number: ";
    cin>>n;

    while(n>0){

int a= n%10  ;

  b =  b*10 + a;
  n/=10;

 }
    cout<< b <<endl;


  //. by FOR LOOP


    int x , ans;
    cout<<"enter a number again : ";

    cin>>x;

    for (int i = 0; x>0; x/=10 )
    {
        int a = x%10;
       i = i*10+a;
ans = i;
    }
    cout<<ans<<endl;



}