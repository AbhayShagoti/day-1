#include<bits/stdc++.h>
using namespace std;

int Rotate(int arr[],int n){
    int x=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int s=sizeof(a)/sizeof(a[0]);
    Rotate(a,s);
    return 0;
}