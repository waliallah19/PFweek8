#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    int count = word.length();
char ch;
cout<<"Enter the number you want to find: ";
cin>>ch;
    if(word[count-1] == ch)
{
 cout<<ch<<" is present."; 
}
else
{
    cout<<ch<<" is not present.";
}
}