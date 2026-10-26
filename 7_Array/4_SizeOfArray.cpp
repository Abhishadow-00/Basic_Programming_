#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter "<< n <<" elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;
    }

    cout<<"total space occupied : "<<sizeof(arr)<<endl;     // net size of a array

    int x = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of arr: "<< x <<endl;

}