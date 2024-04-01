#include <stdio.h>

unsigned long int catalan(unsigned int n){
    if(n<=1)
        return 1;
    unsigned long int res=0;
    for(int i=0; i<n; i++)
        res+=catalan(i)*catalan(n-i-1);
    return res;
}


int main()
{
    for(int i=0; i<10; i++)
        printf("%ld\t",catalan(i));
    return 0;
}

/*
Problems:
due to recursive call the upcoming catalan number will take too much time to compute,
the further the number will take longer and longer time it will (when we 50 or above we can se the difference for the time it will take).
We need a DP solution for that.
*/
