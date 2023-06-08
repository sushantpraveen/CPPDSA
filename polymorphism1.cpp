//function overloading
#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"hellow love babbar"<<endl;
        
    }
    int sayHello(string name,int n){
        cout<<"hellow"<<endl;
        return n;
    }
    void sayHello(string name){
        cout<<"hello"<<endl;
    }

};
int main()
{
    A obj;
    obj.sayHello();

}