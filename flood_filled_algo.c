// Refer Flood fill at GFG
// The code is partially correct need to check it.
/* sample input
4 4
1 5 5 5
5 5 7 5
5 5 6 4
7 8 5 1
2 1 9
*/


#include <stdio.h>

void flood(int x, int y,int r, int c, int arr[r][c], int temp, int key)
{
    int i,j;
    if(arr[x+1][y]==temp){arr[x+1][y]=key; flood(x+1,y,r,c,arr,temp,key);}
    else if(arr[x][y+1]==temp){arr[x][y+1]=key; flood(x,y+1,r,c,arr,temp,key);}
    else if(arr[x-1][y]==temp){arr[x-1][y]=key; flood(x-1,y,r,c,arr,temp,key);}
    else if(arr[x][y-1]==temp){arr[x][y-1]=key; flood(x,y-1,r,c,arr,temp,key);}
    else{return;}
    
    
    // printf("\n\n");
    // for(i=0; i<r; i++)
    // {
    //     for(j=0; j<c ;j++)
    //     {printf("%d ",arr[i][j]);}
    //     printf("\n");
    // }
    
}


int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int i,j;
    for(i=0; i<r; i++)
        for(j=0; j<c ;j++)
        {scanf("%d",&arr[i][j]);}
    
    int x,y,key;
    scanf("%d%d%d",&x,&y,&key);
    int temp=arr[x][y];
    
    printf("\n\n");
    flood(x,y,r,c,arr,temp,key);
    
    // for(i=0; i<r; i++)
    // {
    //     for(j=0; j<c ;j++)
    //     {printf("%d ",arr[i][j]);}
    //     printf("\n");
    // }
    
    return 0;
}
