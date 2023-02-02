#include <iostream>
using namespace std;
main()
{
    int size;
    float sum;
    cout<<"Enter the size of array: ";
    cin>>size;
    float resistors[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter resistance of" <<idx<<" resistor: ";
        cin>>resistors[idx];
        sum = sum + resistors[idx];
    }
    cout<<"Total resistance is "<<sum<<" ohms.";
}
