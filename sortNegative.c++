#include<bits/stdc++.h>
using namespace std;

void part(int a[],int n)
{
    int pivotIndex=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[pivotIndex]);
            pivotIndex++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
  int a[] = { 9, -3, 5, -2, -8, -6,7,-9991,6,7,0,-9,3 };
  int n = sizeof(a)/sizeof(a[0]);
  part(a, n);
  return 0;
}