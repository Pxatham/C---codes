#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream file("pratham.txt");
    string s;
    getline(file,s);
    file>>s;
    cout<<s<<endl;
}