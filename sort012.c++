#include<bits/stdc++.h>
using namespace std;

void sortn(int arr[],int n)
{
    int i=0,c1=0,c2=0,c3=0;
    for(i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 0:
              c1++;
              break;
            case 1:
              c2++;
              break;
            case 2:
              c3++;
              break;
        }
    }
    i=0;
    while(c1>0)
    {
        arr[i++]=0;
        c1--;
    }
    while(c2>0)
    {
        arr[i++]=1;
        c2--;
    }
    while(c3>0)
    {
        arr[i++]=2;
        c3--;
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,0,1,0,2,1,0,0,2,1,};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortn(arr,n);
    return 0;
}