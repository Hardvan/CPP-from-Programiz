#include <iostream>
using namespace std;

void display(char = '*', int = 3);

// // Invalid
// void add(int a, int b = 3, int c, int d);

// // Invalid
// void add(int a, int b = 3, int c, int d = 4);

// // Valid
// void add(int a, int c, int b = 3, int d = 4);

int main()
{
    // No arguments
    display();

    // One argument
    display('$');

    // Two arguments
    display('$', 10);

    return 0;
}

void display(char ch, int count)
{
    for (int i = 1; i <= count; i++)
    {
        cout << ch;
    }
    cout << endl;
}
