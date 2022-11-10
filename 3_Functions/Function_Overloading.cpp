#include <iostream>
using namespace std;

void display(int);
void display(double);
void display(int, double);

int main()
{
    int a = 10;
    double b = 10.10;

    display(a);

    display(b);

    display(a, b);

    return 0;
}

void display(int n)
{
    cout << "Int Number: " << n << endl;
}

void display(double n)
{
    cout << "Double Number: " << n << endl;
}

void display(int n1, double n2)
{
    cout << "Two Numbers: " << n1 << " " << n2 << endl;
}
