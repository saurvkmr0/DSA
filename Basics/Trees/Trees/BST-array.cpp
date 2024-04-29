#include <iostream>
using namespace std;

void insert(int arr[], int temp)
{
    bool inserted=false;
    int i=0;
    while(!inserted)
    {
        if(arr[i]==0)
        {
            arr[i]=temp;
            inserted=true;
        }
        else
        {
            if(temp<arr[i])
            {
                i=(i*2)+1;
            }
            else
            {
                i=(i*2)+2;
            }
        }
    }
    return;
}

int bfs(int arr[], int target)
{
    int queue[20]={0};
    int i=0,q=0;
    while(1)
    {
        if(arr[queue[i]]==target)
        {
            return i;
        }
        else
        {
            q++;
            queue[q]=i*2+1;
            q++;
            queue[i+2]=i*2+2;
            i++;
        }
    }
}

int main(){
    int arr[35]={0};
    int n,temp;
        scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp);
        insert(arr,temp);
    }
    for(int i=0; i<35; i++)
    {
        printf("%d ",arr[i]);
    }

    // implementing bfs for searching
    int target;
    printf("Enter data to search using bfs\n");
    scanf("%d",&target);
    int target_index=bfs(arr,target);
    printf("%d",target_index);
    return 0;
}

