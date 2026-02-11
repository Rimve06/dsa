#include<iostream>
#include<string>
using namespace std;

class Stack
{
public:
    int top;
    char* arr;
    int n;

    Stack(int x)
    {
        arr = new char[x];
        top = -1;
        n = x;
    }

    void push(char val)
    {
        if(top < n-1)
            arr[++top] = val;
    }

    char pop()
    {
        return arr[top--];
    }

    ~Stack()
    {
        delete[] arr;
    }
};
