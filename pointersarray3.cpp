#include<iostream>
using namespace std;
int main()
{
    /*
    int arr[10]={0};
    int *p=&arr[0];
    cout<<&p<<endl;
    cout<<&(*p)<<endl;
    */
   int arr[5]={12,17,90};
   int *p=&arr[0];
   cout<<*p<<endl;
   cout<<*(p+1)<<endl;
   *p=*p+1;
   cout<<*p<<endl;
   cout<<&p<<endl;

    
}
