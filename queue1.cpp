#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    //create queue
    queue<int>q;
    q.push(11);
    q.push(15);
    q.push(13);
    cout<<"front of queue is:"<<q.front()<<endl;
    cout<<"size of queue is :"<<q.size()<<endl;
    q.pop();
    cout<<"size of queue is :"<<q.size()<<endl;
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

}