//on this day i learnt stack 
#include <iostream>
using namespace std;
class Stack
{
public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size]; // dyanamically we created array
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {   top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{

    Stack st(2);
    st.push(22);
    st.push(43);
    st.push(65);
    cout << st.peek() << endl;
}