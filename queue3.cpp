#include<iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    CircularQueue(int n){
        size=1000;
        arr=new int[size];
        front=rear=-1;
    }
    bool enqueue(int value){
        if((front==0&&rear==size-1) ||rear==(front-1)%(size-1));
        cout<<"queue is full"<<endl;
    }
    else if(front==-1)
    {
        front=rear=0;
        arr[rear]=value;
    }
    else if(rear==size-1&&front!=0)
    {
        rear=0;
        arr[rear]=value;
    }
    else{
        rear ++;
        arr[rear]=val;
    }

};
int main()
{

}