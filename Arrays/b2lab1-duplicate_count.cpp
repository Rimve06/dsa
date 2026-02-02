#include<iostream>
using namespace std;

int main()
{
    int s;
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<s;i++)
    {
        int k=1;
        for(int j=i+1;j<s;j++)
        {
            if(arr[i]==arr[j])
            {
                k++;
            }
        }
        if(k>1)
        {
            cout<<arr[i]<<"is "<<k<<"times"<<endl;
        }
    }
}
