#include <iostream>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    long long int arraysum=0;

    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
        arraysum+=arr[i];
    }

    long long int set=0;
    long long int min=arraysum,diff=0;
    for(int i=0; i<(1<<n); i++)
    {
        set=0;
        for(int j=0; j<n; j++)
        {
            if(i & 1<<j)
            {
                set+=arr[j];
            }
        }
        diff=(arraysum-set)-set;
        if(diff<0){diff=diff*(-1);}
        if(diff<min)
            min=diff;
    }

    printf("%lld",min);

    return 0;
}