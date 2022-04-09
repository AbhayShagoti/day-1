#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
   vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> ans;
        unordered_map<int,int> m;
        
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
            if(m[arr[i]] == 2){
                ans.push_back(arr[i]);
            }
        }
        if(ans.empty()){
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main()
{
    int a[]={1,2,3,5,8,7,3};
    int n = sizeof(a)/sizeof(a[0]);
    class solution o;
    vector<int> ans=o.duplicates(a,n);
    for(int i : ans) cout<<i<<" ";
}