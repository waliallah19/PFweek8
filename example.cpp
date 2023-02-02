#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    float gpa[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter value: ";
        cin>>gpa[idx];
    }
    for(int idx = 0; idx<size;idx++)
    {
      cout<<" "<<gpa[idx];
    }
}
