#include <iostream>
using namespace std;

class Room
{
private:
    double length;
    double breadth;
    double height;

public:
    // Function to initialise private variables
    void initData(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room room1;

    room1.initData(10, 20, 30);

    cout << "Area: " << room1.calculateArea() << endl;
    cout << "Volume: " << room1.calculateVolume() << endl;

    // // Invalid Code
    // room1.length;
    // room1.breadth;
    // room1.height;

    return 0;
}