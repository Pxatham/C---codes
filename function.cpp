#include <iostream>
using namespace std;
int max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}
int areaR(int l,int b){
    return l*b;
}
int areaS(int l){
    return l*l;
}
int main(){
    int a,b;
    cout<<"enter length";
    cin>>a;
    // cout<<"enetr breath";
    // cin>>b;
    int m=areaS(a);
    cout<<"area of square is"<<m;
}