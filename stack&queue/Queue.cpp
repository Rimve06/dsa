#include<iostream>
using namespace std;
class  Queue
{
    public:
    int f,b,n;
    int*arr;
     void next(int val)
{
    if(f < 0) { f++; }

    if (b < n - 1)
    {
        arr[++b] = val;
    }
    else
    {
        pop();
        arr[++b] = val;
    }
}
 void pop()
    {
        for(int i=0;i<b;i++)
        {
            arr[i]=arr[i+1];
        }
        b--;
    }
    void display()
    {
        for(int i=f;i<=b;i++)
        {
            cout<<arr[i];
        }
    }
};

