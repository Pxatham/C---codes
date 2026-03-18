#include <iostream>
using namespace std;
int main()
{
    char str[] = "Hello World";
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum++;
    }
    cout << "The length of the string is: " << sum << endl;
}