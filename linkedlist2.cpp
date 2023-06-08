#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free karne ki code
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data" << value << endl;
    }
};
void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data<< endl;
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(int position, Node *&head)
{
    // deleting first or last node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;

        int cnt=1;
        while (cnt<position)
        {
            /* code */
            prev=curr;
            curr=curr->next;
            cnt++;

        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    {
        // deleting any middle or alst node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt <= position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(head, 12);
    print(head);
    insertAtTail(head, 15);
    print(head);
    
    insertAtTail(head, 16);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(2,head);
    print(head);
}