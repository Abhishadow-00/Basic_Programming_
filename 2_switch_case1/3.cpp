#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your age"<<endl;
    cin >>x; // x = age

    switch(x>=18){
        case 1:  // yha 1 ke jagah true ka bhi use kar skte hai
        cout<<"you can enter";
        break;

       

        case 0: // yha 0 ke jagah false ka bhiuse kar skte hai
        cout<<"you can not enter";
        break;

        
        default :
        cout<<"enter valid age";
    }

    return 0;

}