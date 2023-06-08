#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;
    //address of operator &
    cout<<"address of num is : "<<&num<<endl;

    // we will make the pinter
    int *ptr=&num;
    cout<<"value is:"<<*ptr<<endl;
    cout<<"address is:"<<ptr<<endl;

    cout<<"size of integer:"<<sizeof(num)<<endl;
    cout<<"size of pointer:"<<sizeof(*ptr)<<endl; 



    //float value
    float x=9.7;
    float *p=&x;
    cout<<"value of x:"<<*p<<endl;
    cout<<"address :"<<p<<endl;

    return 0;
}  