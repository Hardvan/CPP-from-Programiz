#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;
};

struct Person getData();
void displayData(struct Person);

int main()
{
    struct Person p;

    p = getData();

    displayData(p);

    return 0;
}

struct Person getData()
{
    struct Person p;

    cout << "Enter Name: ";
    getline(cin, p.name);
    cout << "Enter Age: ";
    cin >> p.age;
    cout << "Enter Salary: ";
    cin >> p.salary;

    return p;
}

void displayData(struct Person p)
{
    cout << "Displaying Details:" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
}