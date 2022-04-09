#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int start,int end)
{
    while(start<end)
    {
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}
void print(int a[],int n){
    int i;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int arr[]={1,4,5,100,8,93,32};
    int s=sizeof(arr)/sizeof(arr[0]);
    print(arr,s);
    reversearray(arr,0,s-1);
    print(arr,s);

    return 0;
}