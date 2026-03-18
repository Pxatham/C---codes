#include <iostream>
using namespace std;
int main(){
    struct{
        string name;
        int id ;
        int dob;
    } s1,s2,s3;
    s1.name="Pratham";
    s1.id=36681;
    s1.dob=2006;
    s2.name="Pawan";
    s2.id=37568;
    s2.dob=2005;
    s3.name="Krish";
    s3.id=35684;
    s3.dob=2004 ;
    cout<<s1.name<<" "<<s1.id<< " "<<s1.dob<<"\n";
    cout<<s2.name<<" "<<s2.id<< " "<<s2.dob<<"\n";
    cout<<s3.name<<" "<<s3.id<< " "<<s3.dob<<"\n";
    return 0;
}