#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return age;
    }
    void setWeight(int n){
        weight=n;
    }
    void show(){
        cout<<"weight of the human is:"<<weight<<endl;
    }
    


};
class Male: public Human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping";
    }

};
int main(){

    Male obj;
    cout<<obj.age<<endl;
    cout<<obj.height<<endl;
    cout<<obj.weight<<endl;
    cout<<obj.color<<endl;
    
    obj.setWeight(50);
    obj.show();
    obj.sleep();

}