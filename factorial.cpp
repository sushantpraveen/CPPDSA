#include<iostream>
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation
    return n*fact(n-1);
}
using namespace std;
int main()
{
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    int ans=fact(n);
    cout<<ans;

}