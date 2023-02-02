#include <iostream>
using namespace std;
main()
{
    float sum, q, d, n, p,price;
    float change[4];
    cout << "Enter Quarter: ";
    cin >> change[0];
    cout << "Enter Dime: ";
    cin >> change[1];
    cout << "Enter Nickel: ";
    cin >> change[2];
    cout << "Enter Penny: ";
    cin >> change[3];
    q = change[0] / 0.25;
    d = change[1] / 0.10;
    n = change[2] / 0.05;
    p = change[3] / 0.01;
    sum = q + d + n + p;
    cout<<"Enter price of desired item: ";
    cin>>price;
    if(price<sum)
    {
        cout<<"You can buy the item.";
    }
    else
    {
        cout<<"You can not buy the item.";
    }
}
