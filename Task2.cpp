#include<iostream>
using namespace std;
main()
{
    int size;
    float average, sum;
    cout<<"Enter the total count of numbers: ";
    cin>>size;
    float avg[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter number: ";
        cin>>avg[idx];
    }
    for(int idx = 0; idx<size; idx++ )
    {
        sum = sum + avg[idx];
    }
    average = sum / size;
    cout<<"Average of entered numbers is "<<average;
}