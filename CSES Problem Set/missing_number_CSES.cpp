#include <stdio.h>
#include <iostream>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n]={0};
    int temp;
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&temp);
        arr[temp-1]=1;
    }

    int j=0;
    while(1)
    {
        if(arr[j]==0)
            {break;}
        else
            j++;

    }
    printf("%d",j+1);
    return 0;
}