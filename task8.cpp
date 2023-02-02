#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    int idx=0,sum=0;
    while (word[idx] != '\0')
    {
        idx = idx + 1;
        sum = sum + 1;
    }
    for(int idx = sum; idx>=0;idx--)
    {
        cout<<word[idx];
    }
    }