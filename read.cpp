#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file("pratham.txt", ios::in | ios::out | ios::app);
    file<<"hello Pratham this is write and read file ";
    string s;
    file>>s;
    cout<<"read strings: "<<s<<endl;
}