#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int min;
    int max;
};
Pair solution(int arr[],int n)
{
    struct Pair p;
    p.min=arr[0];
    p.max=arr[0];
    if(n==1){
        p.min=arr[0];
        p.max=arr[0];
    }
    if(n==2){
        if(arr[0]>arr[1])
        {
          p.min=arr[1];
          p.max=arr[0];
        }
        else
        {
          p.min=arr[0];
          p.max=arr[1];
        }
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>p.max){
            p.max=arr[i];
        }
        if(arr[i]<p.min){
            p.min=arr[i];
        }
    }
    return p;
}
int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int n = 6;
    struct Pair p = solution(arr, n);
    cout << "min is "<<p.min << endl;
    cout << "max is "<< p.max;
    return 0;
}