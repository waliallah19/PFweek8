#include <iostream>
using namespace std;
main()
{
    string word;
    int count;
    cout << "Enter a word: ";
    getline(cin, word);
    count = word.length();
    if(count%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
}