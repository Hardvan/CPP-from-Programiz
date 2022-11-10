#include <iostream>
using namespace std;

void display(char s[])
{
    cout << "Character Array: " << s << endl;
}

void display(string s)
{
    cout << "String: " << s << endl;
}

int main()
{
    string str1;
    char str2[100];

    // Getting first string
    cout << "Enter first string: ";
    getline(cin, str1);

    // Getting second string
    cout << "Enter second string: ";
    cin.get(str2, 100, '\n');

    display(str1);
    display(str2);

    return 0;
}