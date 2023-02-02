#include <iostream>
using namespace std;
main()
{
    int size, num;
    cout << "Enter the total count of numbers: ";
    cin >> size;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> arr[idx];
    }
    int smallest=arr[0];
    for (int idx = 1; idx < size; idx++)
    {
      if(arr[idx]<smallest)
      {
         smallest = arr[idx];
      }
    }
    cout<<smallest;
}