#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>a;
    a.push(18);
    a.push(20);
    a.push(11);

    cout<<a.front()<<endl;
    a.pop();
    cout<<a.front()<<endl;
    

}