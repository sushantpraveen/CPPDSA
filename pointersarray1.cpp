#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,5,6};
    cout<<"address of first memory block is:"<<arr<<endl;
    cout<<"address of first memory block is:"<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+4<<endl;
    cout<<*arr+1<<endl;
    cout<<*arr+10<<endl;
    cout<<*(arr+1);

    return 0;
}