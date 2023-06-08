#include<iostream>
using namespace std;
int main()
{
    int arr[10]={23,122,41,67};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;

    cout<<arr[1]<<endl; //11 & 12 are same
    cout<<*(arr+1)<<endl;

    cout<<arr[2]<<endl; //line number 13 and 14 are same.
    cout<<*(arr+2)<<endl;

    cout<<arr[3]<<endl;
    cout<<*(arr+3)<<endl;

}