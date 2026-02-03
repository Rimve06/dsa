#include<iostream>
using namespace std;
class movingavg
{
    public:
    int f,b,n;
    int*arr;
    movingavg(int x)
    {
        n=x;
        f=-1;
        b=-1;
        arr=new int[x];
    }
    void next(int val)
{
    if(f < 0) { f++; }

    if (b < n - 1)
    {
        arr[++b] = val;
    }
    else  // when b == n-1 (full)
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
    double avg()
    {
        double s=0;double a=0;
        double z=0;
        for(int i=f;i<=b;i++)
        {
            s+=arr[i];
            z++;
        }
        a=s/z;
        return a;
    }

};
int main()
{
    int n;
    cin>>n;
    movingavg s(n);
    string x="y";
    int z;
    while(x=="y")
    {
        cin>>z;
        s.next(z);
        cout<<s.avg()<<endl;
        cout<<"do u want to give input?"<<endl;
        cin>>x;
    }
}
