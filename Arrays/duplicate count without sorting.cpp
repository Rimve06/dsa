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
    for(int i=0;i<n;i++)
    {
        bool ch=false;
        int c=1;
         for(int k=0;k<i;k++)
            {
                 if(arr[k]==arr[i])
            {
               ch=true;

            }
            }
             if(ch) {continue;}
             else{ for(int j=i+1;j<n;j++)
        {

           if(arr[i]==arr[j])
           {
               c++;
           }

        }
        cout<<arr[i]<<"times"<<c<<endl;}

    }
}

