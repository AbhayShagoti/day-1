#include<bits/stdc++.h>
using namespace std;

int fmn(int a[],int n)
{
    int sumofn=0,sum=0,i,res=0;
    sumofn= (n+1)*(n+2)/2;
    for(i=0;i<n;i++)
    sum=sum+a[i];
    res=sumofn-sum;
    cout<<res;
    return res;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,9};
    int n = sizeof(a)/sizeof(a[0]);
    fmn(a,n);
}