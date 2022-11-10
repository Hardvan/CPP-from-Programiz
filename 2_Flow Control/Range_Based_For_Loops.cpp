#include <iostream>
using namespace std;

int main()
{
    /* for(variable : collection) {
        // Body of loop
    } */

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : arr)
    {
        cout << n << " ";
    }

    return 0;
}