#include<iostream>
using namespace std;
main()
{
    int size,num;
    bool isFound = false;
    float average, sum;
    cout<<"Enter the total count of numbers: ";
    cin>>size;
    int arr[size];
     for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter number: ";
        cin>>arr[idx];
    }
    cout<<"Enter the number you want to find: ";
    cin>>num;   
    for(int idx=0; idx<size;idx++)
    {
        if(arr[idx]==num)
        {
            isFound = true;
            break;
        }
    }
    if(isFound == true)
    {
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }
}