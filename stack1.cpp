#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //creation of stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(10);
    s.push(11);
    
    //pop
    s.pop();
    cout<<"printing top element:"<<s.top()<<endl;
    cout<<"size of the stack is:"<<s.size()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    
    return 0;


}
