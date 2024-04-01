// find maximum sub araysum (kadence algo used)
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int max=INT_MIN,sum=0;

    for(int i=0; i<n; i++)
        {
            sum=sum+arr[i];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
        }
    
    if(max<0)       //given: consider the empty subarray sum be zero
        max=0;
    printf("%d",max);

    return 0;
}

// follow up question:
// print that subarray that is giving the maximum subarray sum.
