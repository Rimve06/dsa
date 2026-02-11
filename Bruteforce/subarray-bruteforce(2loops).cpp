#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,-1};
    int l=0;
    for(int i=0;i<3;i++)
    {
        int s=0;
        for(int j=l;j<3;j++)
        {
            s+=arr[j];
            l=max(l,s);
        }
    }
    cout<<l<<endl;
}
