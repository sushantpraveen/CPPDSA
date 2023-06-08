#include<iostream>
#include<queue>
using namespace std;
class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    Queue(){
        size=1000;
        arr=new int[size];
        qfront=0;
        rear=0;

    }
    bool isEmpty(){
        if(qfront==rear){
            return true;
        }else{
            return false;
        }

    }
    void enqueue(int data){
        if(rear==size){
            cout<<"queue is full"<<endl;

        }else{
            arr[rear]=data;
            rear ++;
        }
    }

    int dequeue(){
        if(qfront==rear){
            return -1;
        }else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront ++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }
    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(19);
    q.enqueue(11);
    q.enqueue(13);
    q.enqueue(17);
    q.enqueue(12);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    
    cout<<q.isEmpty()<<endl;



}