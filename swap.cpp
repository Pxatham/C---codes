#include <iostream>
using namespace std;
int main(){
    int a,b;
    a=10;
    b=20;
    cout<<"a=10"<<endl;
    cout<<"b=20"<<endl;

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}