#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real;
        cin >> imag;
    }

    // Overloading + operator
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
        {
            cout << "Complex Number: " << real << imag << "i";
        }
        else
        {
            cout << "Complex Number: " << real << "+" << imag << "i";
        }
    }
};

int main()
{
    Complex a, b, result;
    cout << "Enter first number:\n";
    a.input();

    cout << "Enter second number:\n";
    b.input();

    // a calls the operator function
    // b is passed as an argument to the function
    result = a + b;
    result.output();

    return 0;
}