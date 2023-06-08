#include<iostream>
using namespace std;
int length(char str[]){
    //base case
    if(str[0]=='\0'){
        return 0;
    }
    int remain=length(str+1);
    return 1 + remain;
}
int main()
{
    char str[100];
    cout<<"enter str:";
    cin>>str;
    int l=length(str);
    cout<<l<<endl;
    return 0;
}