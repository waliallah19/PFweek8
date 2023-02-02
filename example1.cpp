#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << word;
    int idx = 0;
    while (name[idx] != '\0')
    {
        cout << name[idx] << " at index " << idx << endl;
        idx = idx + 1;
    }
}