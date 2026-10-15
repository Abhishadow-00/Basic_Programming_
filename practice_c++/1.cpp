#include <iostream>
using namespace std;

int main() {
   int x,lottery_number;
   lottery_number=4827 ;
   cout<<lottery_number <<endl;

   cin>>x;

   if (x==lottery_number){
    cout<<"winner";
   }
   else{
    cout<<"try again";
   }


    return 0;
}
