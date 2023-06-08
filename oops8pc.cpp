#include<iostream>
using namespace std;
class A{
    public:
    int num1,num2;
    A(int n1,int n2){ // it is paremeterz constructor which can take argument
    
        num1=n1;
        num2=n2;
    }
    void show(){
        cout<<num1<<" "<<num2<<endl;
    }


};
int main()
{
    A a(3,8);
    a.show();




}
