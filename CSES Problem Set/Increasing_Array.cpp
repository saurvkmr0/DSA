#include <iostream>
#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    scanf("%lld",&arr[0]);
    long long int count=0,temp;
    temp=arr[0];
    for(int i=1; i<n; i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]<temp)
            {
                count=count+(temp-arr[i]);
            }
        else
            temp=arr[i];
    }
    printf("%lld",count);
    

    return 0;
}