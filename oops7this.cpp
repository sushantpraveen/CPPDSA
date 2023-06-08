#include<iostream>
using namespace std;
class Emp{
    public:
    int id;
    float salary;
    string name;
    Emp(string name,int id,float salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void show(){
        cout<<name<<" "<<id<<" "<<salary<<endl;
    }

};
int main(){
    Emp e1=Emp("sushant",00,3000);
    

}