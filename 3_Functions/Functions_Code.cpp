#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello there!" << endl;
}

void printNum(int num)
{
    cout << num << endl;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Simple function
    greet();

    // Function with Arguments
    printNum(420);

    // Function with Return Value
    cout << add(5, 6) << endl;

    return 0;
}