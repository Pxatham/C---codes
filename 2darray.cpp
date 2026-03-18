#include <iostream>
using namespace std;
int main(){
    int R,C,i,j;
    cout<<"enter no of rows ";
    cin>>R;
    cout<<"enter no of columns ";
    cin>>C;
    int arr[R][C];
    int sum=0;
    for(i=1;i<=R;i++){
        for(j=1;j<=C;j++){
            cout<<"enter the elements ";
            cin>>arr[i][j];
        }
    }
    for(i=1;i<=R;i++){
        for(j=1;j<=C;j++){
            cout<<arr[i][j];
            if(i==j){
                sum+=arr[i][j];//diagonal sum 
            }
        }
        cout<<"\n";
    }
    cout<<sum;
}    
    // cout<<arr[1][1]+arr[1][C]+arr[R][1]+arr[R][C]<<"side corner sum";
//     cout<<arr[1][1]+arr[1][C]+arr[R][C];
