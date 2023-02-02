#include <iostream>
using namespace std;
main()
{
    int size1=2,size2;
    cout<<"Enter the size of 2nd array: ";
    cin>>size2;
    float arr1[size1];
    for(int idx = 0; idx<size1; idx++)
    {
        cout<<"Enter number of 1st array: ";
        cin>>arr1[idx];
    }
    float arr2[size2];
    for(int idx = 0; idx<size2; idx++)
    {
        cout<<"Enter number of 2nd array: ";
        cin>>arr2[idx];
    }
    cout<<arr1[0]<<",";
    for(int idx = 0; idx<size2; idx++)
    {
        cout<<arr2[idx]<<",";
    }
    cout<<arr1[1];
}
