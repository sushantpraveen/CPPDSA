#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return name,age,height;

    }
    void setOB(string n,int x,int z){
        name=n;
        age=x;
        height=z;

    }
    void show(){
        cout<<name<<" "<<age<<" "<<height<<endl;
    }

    

  
};
int main()
{
    Student s;
    s.setOB("sushant",25,5);
    s.show();

}