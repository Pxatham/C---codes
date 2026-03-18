#include <iostream>
using namespace std;
// int factorial(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int num=5;
//     cout<<"factorial of "<<num<<"is"<<factorial(num)<<endl;

// }
// int fibo(int n){
//     if(n<=1){
//         return n;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }
// int main() {
//     int term=5;
//     cout<<"fibonacci series using reccursion ";
//     for(int i=0;i<term;i++){
//         cout<<fibo(i)<<",";
//     }
//     return 0;
// }
// void hell(){
//     cout<<"hello world";
// }
// int main(){
//     hell();
// }
int add(int a,int b){
    return a+b;
}
int main(){
    int c,d,e;
    cout<<"eneter 1 no";
    cin>>c;
    cout<<"enter 2 no";
    cin>>d;
    e=add(c,d);
    cout<<e;
}