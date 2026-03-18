#include<iostream>
using namespace std;
// int main(){
//     int num,rev=0;
//     cout<<"enter number";
//     cin>>num;
//     while(num>0){
//         rev=rev*10+num%10;
//         num=num/10;
//     }
//     cout<<rev;
// }
int main(){
    int num,a,sum=0;
    cout<<"enter num";
    cin>>num;
    while(num>0){
        a=num%10;
        sum=sum+a*a*a;
        num=num/10;
    }
    cout<<sum;
}