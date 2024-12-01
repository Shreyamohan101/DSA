#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    //properties
    int top;
    int *arr;
    int size;

    //behaviour
    public:
    Stack(int size)
    {
        this->size = size;
        arr = new int [size];
        top = -1;

    }
    void push(int element)
    {
        if(size-top >1)
        {
        arr[top] = element;
        top = top+1;

        }
        else 
        cout<< "stack overflow" << endl;

    }
    void pop()
    {
        if( top>= 0)
        {
            top = top-1;

        }
        else
        cout<< "stack underflow" << endl;
    }
    int peek()
    {
        if(top>= 0)
        {
            return arr[top];

        }
        else
        cout<< "stack is empty" << endl;
        return -1;
    }
    bool isEmpty()
    {
        if (top <0)
        return true;
        else
        return false;
    }
};
int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.pop();
    cout << "Top element is " << s.peek() << endl;
    cout << "Is stack empty? " << (s.isEmpty()? "Yes" : "No") << endl;
    return 0;

}

