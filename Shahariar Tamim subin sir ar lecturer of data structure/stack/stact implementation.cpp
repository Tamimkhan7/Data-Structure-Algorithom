#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1000 // maximum size of the stack
class Stack
{
    int top; // index of the top element of the stack
public:
    int arr[MAX_SIZE]; // array to store elements of the stack
    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return (top == -1);
    }
    bool isFull()
    {
        return (top == MAX_SIZE - 1);
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "Error: Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Error: Stack Underflow" << endl;
            return -1;
        }
        return arr[top--];
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Error: Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.pop() << " Popeed from stack " << endl;
    cout << "Top element is " << s.peek() << endl;
    return 0;
}