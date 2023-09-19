#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,4,1,2,7,5,2};
    int n=sizeof(arr)/sizeof(int);
    int count[10];
    int output[10];
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<=max;++i)
    {
        count[i]=0;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]+= count[i-1];
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}