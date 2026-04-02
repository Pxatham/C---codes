#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter number: ";
    cin >> num;

    // loop until number becomes 0
    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    cout << "Digits: " << count;

    return 0;
}