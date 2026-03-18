#include <iostream>
using namespace std;
int main(){
    struct{
        string brand;
        string model ;
        int year;
    } m1,m2,m3;
    m1.brand="BMW";
    m1.model="X4";
    m1.year=1999;
    m2.brand="FORD";
    m2.model="MUSTANG";
    m2.year=1969;
    cout<<m1.brand<<" "<<m1.model<< " "<<m1.year<<"\n";
    cout<<m2.brand<<" "<<m2.model<< " "<<m2.year<<"\n";
    return 0;
}