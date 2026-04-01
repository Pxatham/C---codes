#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    // check divisible by 2
    if (num % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }

    return 0;
}