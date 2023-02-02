#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << word<<endl;
    int idx = 0,sum=0;
    while (word[idx] != '\0')
    {
        cout << word[idx] << " at index " << idx << endl;
        idx = idx + 1;
        sum = sum + 1;
    }
    cout<<"Total indexes are "<<sum;
}