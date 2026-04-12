#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // move non-zero forward
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // fill remaining with 0
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    // print result
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}