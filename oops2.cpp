#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    int reg;


    private:
    int phonenumber;

    public:
    int getPhone(){
        return phonenumber;
    }
    void setPhone(int p){
        phonenumber=p;
    }
    void show(){
        cout<<phonenumber<<endl; 
    }


};
int main()
{
    Student s;
    s.reg=12006076;
    s.age=25;
    cout<<s.reg<<endl;
    cout<<s.age<<endl;
    s.setPhone(9693);
    s.show();
}