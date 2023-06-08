// singly linked list
// insert at head
//insert at tail
//inset at position
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertionAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertionAtPosition(Node *&head,int position,int d){
    Node *temp=head;
    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //creating node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data;
    Node *head = node1;
    Node *tail = node1;
    insertionAtHead(head, 30);
    print(head);
    inserAtTail(tail, 70);
    print(tail);
    insertionAtPosition(head,3,22);
    print(head);
}