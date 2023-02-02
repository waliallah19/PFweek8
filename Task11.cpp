#include <iostream>
using namespace std;
main()
{
    string word;
    int sum=0;
    cout << "Enter a word: ";
    getline(cin, word);
    int count = word.length();
    for(int idx = 0; idx < count; idx++ )
    {
        if(word[idx] == 'A' || word[idx] == 'E'||word[idx] == 'I'||word[idx] == 'O'||word[idx] == 'U'||word[idx] == 'a'||word[idx] == 'e'||word[idx] == 'i'||word[idx] == 'o'||word[idx] == 'u' )
    sum = sum + 1;
    }
    cout<<"Total number of vowels are "<<sum;
}