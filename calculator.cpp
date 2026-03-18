#include <iostream>
using namespace std;
int main()
{
    // this is for length 
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
            bool equal = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    equal = false;
                    break;
                }
            }
            if (equal)
            {
                cout << "Arrays are equal";
            }
            else
            {
                cout << "Arrays are not equal";
                return 0;
            }
        }
    }
    return 0;
}