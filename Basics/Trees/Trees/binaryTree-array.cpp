/*
implementing binary tree(not a binary search tree) using array(i.e. linear data structure)
logic:> 
the root node will be at the 0th index of the array.
for any node at the ith index, 
its parent node will be at ((i-1)/2)th index;
its left child will be at (i*2+1)th index;
its right child will be at (i*2+2)th index;
Ex:> {4,7,9,14,8,3,6,5}

                    4
                 /      \
              /           \
            7               9
          /   \           /   \
        14      8       3       6
       /
      5

*/


#include <iostream>
using namespace std;

int main()
{   
    // int arr[8]={4,7,9,14,8,3,6,5};

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        if(i%3==0)
            cin >> arr[i];
        else if(i%2==0)
            cin >> arr[i];
        else if(i%1==0)
            cin >> arr[i];
    }

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}

