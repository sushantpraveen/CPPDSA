#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
void insertNode(Node *&tail,int element,int d ){
    //assuming that the element is present in the list
    if(tail==NULL){
        Node *newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }else{
        //none empty list
        Node *curr=tail;
        while(curr->data !=element){
            curr=curr->next;
        }
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }

}
void print(Node *tail){
    Node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while (tail !=temp);
    cout<<endl;
    
    
}
int main()
{
    Node *tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);

}