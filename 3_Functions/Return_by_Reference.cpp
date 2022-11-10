#include <iostream>
using namespace std;

// Global Variable
int num;

int &test();

int main()
{
    // Equivalent to num = 5
    test() = 5;

    cout << num << endl;

    return 0;
}

// Returns the address of num variable
int &test()
{
    return num;
}

/* Cannot return constant
int &test()
{
    return 2;
}
*/

/* Cannot return local variable
int &test()
{
    int n = 2;
    return n;
}
*/