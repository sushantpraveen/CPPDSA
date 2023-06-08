//multi-level inheritance
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
class GermanSheperd:public Animal{

};
class Bulldog:public  GermanSheperd{

};
int main()
{
    Dog d;
    d.speak();
    GermanSheperd g;
    g.speak();
    Bulldog b;
    b.speak();

}
// example of inheritance dog is inheting function of animal class