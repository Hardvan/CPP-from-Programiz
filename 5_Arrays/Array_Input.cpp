#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << "Enter five numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "The numbers are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}