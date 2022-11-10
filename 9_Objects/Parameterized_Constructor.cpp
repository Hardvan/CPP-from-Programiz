#include <iostream>
using namespace std;

class Wall
{
private:
    double length;
    double height;

public:
    // Parameterized Constructor
    Wall(double l, double h)
    {
        length = l;
        height = h;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    Wall wall1(10, 20);

    cout << "Area: " << wall1.calculateArea();

    return 0;
}