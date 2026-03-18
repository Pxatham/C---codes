#include <iostream>
using namespace std;
    union geek{
        int age;
        char grade;
        float gpa;

    };
    int main(){
        union geek s1;
        s1.age=20;
        cout<<"age"<<s1.age<<endl;
        s1.grade ='A';
        cout<<"Grade"<<s1.grade<<endl;
        s1.gpa=8.8;
        
        cout<<"GPA"<<s1.gpa<<endl;

}