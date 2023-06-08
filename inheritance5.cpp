#include<iostream>
using namespace  std;
class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }

};
class B:public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }


};
class C:public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }


};
class D:public B{
    public:
    void func4(){
        cout<<"Inside function 4"<<endl;
    }

};
int main(){
    A object1;
    object1.func1();
    B object3;
    object3.func1();
    D object2;
    object2.func4();
    

}