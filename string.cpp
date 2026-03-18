#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    // string name;
    // cout<<"enter your name";
    // getline(cin,name);
   // cout<<"my name is "<<name;
    string a='hello world';
   // int n=name.size();
    // for(int i=0;i<n;i++){
    //     if(name[i]!=' '){
    //         a+=name[i];
    //     }
    // }
    // cout<<a;
    sort(a.begin(),a.end());
    cout<<a<<"\n";

}