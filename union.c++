#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/

void display(set<int> s)
{
  set<int>::iterator itr;
  for (itr = s.begin(); 
       itr != s.end(); itr++) 
  {
    cout << *itr << " ";
  }
}  
void printIntersection(int arr1[], int arr2[], int n1,int n2)
{
    set<int> hs;
 
    // Insert the elements of arr1[] to set S
    for (int i = 0; i < n1; i++)
        hs.insert(arr1[i]);
 
    for (int i = 0; i < n2; i++)
 
        // If element is present in set then
        // push it to vector V
        if (hs.find(arr2[i]) != hs.end())
            cout << arr2[i] << " ";
}
int main()
{
   int a[] = { 1,2,9,55,11};
  int n = sizeof(a)/sizeof(a[0]);
  int b[] = { 1,2,3,7,9,11,77};
  int m = sizeof(b)/sizeof(b[0]);
  
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
     for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    cout<<s.size();
    cout<<endl;
 
 
  display(s);
  cout<<endl;
  printIntersection(a,b,n,m);
  return 0;
}