#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;
};

int main()
{
    struct Person p;

    // Inputting
    cout << "Enter Name: ";
    getline(cin, p.name);
    cout << "Enter Age: ";
    cin >> p.age;
    cout << "Enter Salary: ";
    cin >> p.salary;

    // Displaying
    cout << "Displaying Details:" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;

    return 0;
}