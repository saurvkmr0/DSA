#include <stdio.h>
#include <iostream>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp_n=n;
    n=pow(2,n);
    int temp,i,half;
    long long int digit, multi=1, number=0;
    int digit_count;
    for(i=0; i<n; i++)
        {
            half=i/2;
            temp=(i^half);
            // printf("%d\n",temp);
            number=0;
            multi=1;
            digit_count=0;
            while(temp>0)
                {
                    digit=temp%2;
                    number=number+(multi*digit);
                    multi=multi*10;
                    temp=temp/2;
                    digit_count++;
                }
            if(digit_count!=0)
            {
                for(int k=0; k<temp_n-digit_count; k++)
                    printf("0");
                printf("%lld\n",number);
            }
            else
                {for(int k=0; k<temp_n; k++)
                    printf("0");
                    printf("\n");
                }  
        }

    return 0;
}