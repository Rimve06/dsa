#include<iostream>
#include<cctype>
using namespace std;
class Stack
{
public:
    char*arr;
    int cap;
    int top;
    Stack()
    {
        cap=1;
        arr=new char[cap];
        top=-1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(char x)
    {
        if(isalpha(x))
        {
             if(top==cap-1)
        {
            cap*=2;
            char*newarr=new char[cap];
            for(int i=0;i<=top;i++)
            {
                newarr[i]=arr[i];
            }
            delete []arr;
            arr=newarr;
        }
        x = tolower(x);
        arr[++top]=x;
        }


    }
    char pop()
    {
        if(top==-1)
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        return arr[top--];
    }
};
int main()
{
    string x;
    getline(cin,x);
    Stack stk;
    for(int i=0;i<x.size();i++)
    {
        char c;
        c=x[i];
        stk.push(c);
    }
    int found=1;
    for(int i=0;i<x.size();i++)
    {
        if(!isalpha(x[i])) {continue;}
      else
      {
         x[i]=tolower(x[i]);
        char c=stk.pop();
        cout<<c;
        if(x[i]!=c)
        {
            found=0;
            break;
        }
      }
    }
    if(found)
    {
        cout<<"p"<<endl;
    }
    else
    {
        cout<<"np"<<endl;
    }
}
