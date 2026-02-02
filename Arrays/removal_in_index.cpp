#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k--;
    while(k<n)
    {arr[k]=arr[k+1];
    k++;}
    n--;
    for(int i=0;i<n;i++)
    {
       cout<< arr[i];
    }
}
