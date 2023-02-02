#include<iostream>
using namespace std;
main()
{
       int size;
    cout<<"Enter the total count of numbers: ";
    cin>>size;
    float arr[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter number: ";
        cin>>arr[idx];
    }
    for(int idx = size-1; idx >= 0; idx--)
    {
        cout<<arr[idx]<<endl;
    }

}