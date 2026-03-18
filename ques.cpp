#include <iostream>
using namespace std;
int main(){
    //COUNT NO OF STARS ...


    // int n,s; 
    // cout<<"enter no of nights you have counted the stars";
    // cin>>n;
    // int count=0;
    // for(int i=0;i<n;i++){
    //     cout<<"enter no of stars ";
    //     cin>>s;
    //     count+=s;
    // }
    // cout<<count;

    //7

    // float a,sum;
    // for(int i=1;i<=7;i++){
    //     cout<<"enter water intake for day"<<i<<" : ";
    //     cin>>a;
    //     sum+=a;
    // }
    // cout<<sum;
    // int a,b,c,d,s0,s1,s2,s3,s4;
    // cout<<"enter the pages you have to start with first week";
    // cin>>a;
    // int count=0;
    //     s0=a*7;
    //     b=a+5;
    //     s1=b*7;
    //     c=a+10;
    //     s2=c*7;
    //     d=a+15;
    //     s3=d*7;
    //     count=+s0+s1+s2+s3;
    // cout<<count;

// 35,70,105,140,40///140,175,210,245,80
// 70,105,140,175
    int pages_per_dayfw,days_in_month;
    cout<<"enter pages per day in first week ";
    cin>>pages_per_dayfw;
    cout<<"enter total days in month";
    cin>>days_in_month;
    int total_pages=0;
    int pages_perday=pages_per_dayfw;
    int weeks_in_month=days_in_month/7;
    int remaining_days=days_in_month%7;
    for(int w=1;w<=weeks_in_month;w++){
        total_pages+=pages_perday*7;
        pages_perday+=5;
    }
    if(remaining_days>0){
        total_pages+=pages_perday*remaining_days;
    }
    cout<<total_pages;
}
