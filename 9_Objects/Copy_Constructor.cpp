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

    // Copy Constructor
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    Wall wall1(10, 20);

    // Copying contents
    Wall wall2 = wall1;

    cout << "Area 1: " << wall1.calculateArea() << endl;
    cout << "Area 2: " << wall2.calculateArea() << endl;

    return 0;
}