#include<iostream>
using namespace std;
class Student{
    int roll;
    int marks;
    public:
    Student(int m,int n) // parameterized cons
    {
        roll=m;
        marks=n;
    }
    Student(Student &t); //copy constructor
    void show(){
        cout<<roll<<endl;
        cout<<marks<<endl;
    }
    Student :: Student(Student &t)
    {
        roll=t.roll;
        marks=t.marks;
    }


};
int main()
{
    Student r(60,130);
    r.show();
    Student stu(r);
    stu.show();
    
}