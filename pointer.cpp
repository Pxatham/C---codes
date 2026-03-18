#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *ptr;
    ptr = &var;
    cout << "value of var" << var << endl;
    cout << "address of var" << &var << endl;
    cout << "value stored in ptr var" << ptr << endl;
    cout << "value pointed to by ptr" << *ptr << endl;
}