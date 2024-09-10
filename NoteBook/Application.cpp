#include <iostream>
#include <fstream>
#include "NoteBook.cpp"

using namespace std;
int number;
string text;

void run()
{
    // cout << "1-Write text" << endl;
    // cout << "2-Display note" << endl;

    // cout << "Enter your number" << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Enter your text" << endl;
        cin >> text;
        addText(text);
        cout << "You entered: " << text << endl;
        break;
    case 2:
        displayFile();
    case 3:
        cin>> text;
        searchText(text);
        break;
    case 4:
        string oldtext,newtext;
        cin>>oldtext;
        cin>>newtext;
        replaceText(oldtext,newtext);
        break;

    
    }
}
