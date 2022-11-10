#include <iostream>
using namespace std;

class Student
{
public:
    double marks;

    // Constructor
    Student()
    {
    }

    Student(double m)
    {
        marks = m;
    }
};

void calcAverage(Student s1, Student s2)
{
    double average = (s1.marks + s2.marks) / 2;

    cout << "Average: " << average << endl;
}

Student createStudent()
{
    Student s(10000);
    return s;
}

int main()
{
    // Passing Object to Function
    Student s1(100), s2(100);
    calcAverage(s1, s2);

    // Returning Object from Function
    Student s3;
    s3 = createStudent();
    cout << s3.marks << endl;

    return 0;
}