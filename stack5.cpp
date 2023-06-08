  // stack using aray with coding ninja
#include<iostream>
#include<stack>
#include<climits>
using namespace std;

class StackUsingArray{
  
    int *data;
    int nextIndex;
    int capacity;

    public:
    StackUsingArray(int totalSize){
        data=new int[totalSize];
        nextIndex=0;
        capacity=totalSize;
    }
    int size(){
        return nextIndex;
    }
    bool isempty(){
      if(nextIndex==0){
        return true;
      }else{
        return false;
      }
    }
    //insert elemnt in the index
    void push(int element){
      if(nextIndex==capacity ){
        cout<<"Stack is full"<<endl;
        return;
      }
      data[nextIndex]=element;
      nextIndex ++;
    }

    // delete the elemnt
    int pop( ){
      if(isempty()){
        cout<<"stack is empty"<<endl;
        return INT8_MIN;
      }
      nextIndex --;
      return data[nextIndex];
    }

};
int manin()
{
  StackUsingArray s(4);
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.pop();


}  