#include <iostream>
using namespace std;

int main()
{
    double num = 3.14;
    cout << "Number (double): " << num << endl;

    // C-style conversion
    cout << "Number (int): " << (int)num << endl;

    // Function-style conversion
    cout << "Number (int): " << int(num) << endl;

    return 0;
}