#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, value;

    cout << "Enter size: ";
    cin >> n;

    // input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    // shift elements to right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value; // insert value
    n++;

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}