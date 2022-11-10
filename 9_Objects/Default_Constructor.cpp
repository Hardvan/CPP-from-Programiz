#include <iostream>
using namespace std;

class Wall
{
private:
    double length;

public:
    // Default Constructor
    Wall()
    {
        length = 10;
        cout << "Length: " << length;
    }
};

int main()
{
    Wall wall1;

    // cout << wall1.length; // Error here

    return 0;
}

// Note: If we have not defined a constructor in our class,
// then the C++ compiler will automatically create a default constructor
// with an empty code and no parameters.