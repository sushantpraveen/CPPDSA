#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter:"<<endl;
    cin>>num;
    if(num>=90){
        cout<<"a+";
    }
    else if(num>=80){
        cout<<"a";

    }
    else if(num>=70){
        cout<<"b+";
    }
    else if(num>=60){
        cout<<"b";
    }
    else{
        cout<<"fail";
    }
    return 0;
}