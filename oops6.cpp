#include<iostream>
using namespace std;
class Emp{
    public:
    int roll;
    int id;
    void show(){
        cout<<roll<<endl;
        cout<<id<<endl;

    }

};
int main()
{
    Emp e;
    e.roll=12;
    e.id=12006076;
    e.show();


}