#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Range Based for loop
    for (const int &n : arr) // More memory efficient than int n.
    {                        // const is used to prevent accidental modification.
        cout << n << " ";
    }
    cout << endl;

    // Traditional Method
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}