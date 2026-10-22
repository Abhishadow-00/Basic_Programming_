#include <iostream>
using namespace std;

// syntax -->  datatype arrayname[size] = {d1 , d2 , d3 , ...., dn};

int main() {
    // declaration -->  datatype arrayname[size]
     int arr[5] ;
 
     // initialization --> arrayname = {d1 , d2 , d3 , ...., dn} //( array of size n )
     int arr1[5]={1,3 ,4 ,8} ;

     cout<<arr1[3]<<endl;   // index no 3 
     cout<<arr1[4]<<endl;   // index 4 is emptty so by default 0 

     arr1[4] = 5;  // index 4 ka value  replace by 5
     cout<<arr1[4]<<endl;

     arr1[1] = 7;   // index 1 ka value  replace by 7
      cout<<arr1[1]<<endl; 


}