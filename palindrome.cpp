#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0, remainder, original;

    cout << "Enter number: ";
    cin >> num;

    original = num; // store original number

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}