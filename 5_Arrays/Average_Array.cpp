#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;
    double sum = 0;

    for (const int &n : arr)
    {
        cout << n << " ";
        sum += n;
        count++;
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / count << endl;

    return 0;
}