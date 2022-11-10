#include <iostream>
using namespace std;

class Room
{
public:
    double length;
    double breadth;
    double height;

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }

private:
    double secret;
};

int main()
{
    // Creating object of class Room
    Room room1;

    room1.length = 1;
    room1.breadth = 2;
    room1.height = 1.0;

    cout << "Area: " << room1.calculateArea() << endl;
    cout << "Volume: " << room1.calculateVolume() << endl;

    // cout << room1.secret;    Cannot access private variable

    return 0;
}