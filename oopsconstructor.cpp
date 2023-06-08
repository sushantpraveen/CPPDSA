#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    int sal;
    void show(){
        cout<<id<<endl;
    }
    Student(){
        cout<<"constructor called"<<endl;
    }

};
int main()
{
    cout<<"constructorcalled 2!"<<endl;
    Student s;
    s.id=101;
    s.sal=850;
    s.show();

}