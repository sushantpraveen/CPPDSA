#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Student {
	public:
		int reg;
		int age;
		
	private:
		int phoneNumber;
		
	public:
		
	int getPhone(){
		return phoneNumber;
	}
	
	void setPhone(int p){
		phoneNumber = p;
	}
	
	void show(){
		cout<<phoneNumber<<endl;
	}
};

int main(){
	Student s;
	s.reg = 12000000;
	s.age = 0000;
	
	cout<<s.age<<endl;
	cout<<s.reg<<endl;
	
	s.setPhone(05646);
	s.show();
	
	
}