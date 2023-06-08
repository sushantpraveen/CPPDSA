#include<iostream>
using namespace std;
int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive relation
    return fib(n-1)+fib(n-2);
    
}
int main()
{
    int i=0;
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    while (i<n)
    {
        cout<<" "<<fib(i);
        i++;
    }
    return 0;
    


}