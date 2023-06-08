// single level inheritance
#include<iostream>
using namespace std;
class Animal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }


};
class Dog:public Animal{


};
int main()
{
    Dog d;
    d.speak();
    cout<<d.age<<endl;

}
// example of inheritance dog is inheting function of animal class