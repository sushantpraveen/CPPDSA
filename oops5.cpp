#include<iostream>
using namespace std;
class Car{
    public:
    int price;
    int getCost(){
        return price;
    }
    void setCost(int p){
        price=p;
    }
    void show(){
        //cout<<"Cost of the price is : "<<price<<endl;
    }
    Car(){
        cout<<"constructor called"<<endl;
    }

    

};
int main()
{
    cout<<"hii"<<endl;
    Car details;
    Car *d= new Car(); // dynamic allocation
    
    
    cout<<"hellow"<<endl;

    
    details.setCost(8585858);
    details.show();
 

    

}