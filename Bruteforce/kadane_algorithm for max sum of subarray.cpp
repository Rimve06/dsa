#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,-1};
    int l=0;
    int s=0;
    for(int i=0;i<3;i++)
    {
      s+=arr[i];
      l=max(l,s);
      if(s<0)
      {
          s=0;
      }

    }
    cout<<l<<endl;
}
