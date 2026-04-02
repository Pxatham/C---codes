#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    // swapping
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}