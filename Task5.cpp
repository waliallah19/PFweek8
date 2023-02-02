#include<iostream>
using namespace std;
main()
{
    int size,num;
     cout<<"Enter the total count of numbers: ";
    cin>>size;
    int arr[size];
     for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter number: ";
        cin>>arr[idx];
    }
       cout<<"Enter the number you want to find scaler product with: ";
    cin>>num; 
    for(int idx = size-1; idx>= 0; idx--)
    {
        int scaler;
        scaler = num*arr[idx];
        cout<<"Scaler product: "<<scaler<<endl;
    }
}