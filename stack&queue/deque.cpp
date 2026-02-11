#include<iostream>
#include <vector>
using namespace std;

class deq
{
public:
    int *arr;
    int f;
    int r;
    int s;

    deq(int n)
    {
        s = n;
        f = -1;
        r = -1;
        arr = new int[n];
    }


    void push(int val)
    {
        if(r == s-1)
        {

            return;
        }

        if(f == -1) {f = 0;}
        arr[++r] = val;
    }



    int popb()
    {

        return arr[r--];

        if(r < f)
        {
            f = -1;
            r = -1;
        }
    }

    int popf()
    {

        return arr[f++];

        if(f > r)
        {
            f = -1;
            r = -1;
        }
    }

    void display()
    {
        if(f == -1)
        {
            cout << "Deque is empty\n";
            return;
        }

        cout << "Deque: ";
        for(int i = f; i <= r; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
