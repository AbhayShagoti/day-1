#include <stdio.h>  
// Function that finds the largest sum contiguous array  
 long long maxSubArraySum(int arr[], int n){
        
        int cs=0;
        int ms=0;
        for(int i=0;i<n;i++){
            cs+=arr[i];
            if(cs>ms)
            ms=cs;
            if(ms<0)
            ms=0;
        }
        return ms;
        
    }

// main method  
int main()  
{  
      int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);  
    int max_sum = maxSubArraySum(a, n);  
   printf("Maximum sum of the contiguous array is : %d", max_sum);  
    return 0;  
} 