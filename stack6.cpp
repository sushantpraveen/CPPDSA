#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Stack{
	int *arr;
	int nextIndex;
	int capacity;
	
  public:
  	Stack(int totalSize){
  		arr = new int[totalSize];
  		nextIndex = 0;
  		capacity = totalSize;
	  }
	  
	  int size(){
	  	return nextIndex;
	  } 
	  
	  bool isEmpty(){
	  	if(nextIndex == 0){
	  		return true;
		  }
		  else {
		  	return false;
		  }
	  }
	  
	  int push(int element){
	  	if(nextIndex == capacity){
	  		cout<<"Stack full"<<endl;
	  		return INT_MIN;
		  }
		  arr[nextIndex] = element;
		  nextIndex++;
	  }
	  int pop(){
	  	if(isEmpty()){
	  		cout<<"Stack is empty"<<endl;
	  		return INT_MIN;
		  }
		  nextIndex--;
		  return arr[nextIndex];
	  }
	  
	  int top(){
	  	if(isEmpty()){
	  		cout<<"Stack is empty"<<endl;
	  		return INT_MIN;
		  }
		  return arr[nextIndex - 1];
	  }
};
int main()
{
	Stack s(5);
	s.push(10);
	s.push(11);
	s.push(12);
	cout<<s.top()<<endl;
	
}

	