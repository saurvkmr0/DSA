/*
Creating a segment tree using array
segment tree consists of 2N-1 nodes
and all the leaf node are the actual values of array
and the parent of the two nodes is the result of some operation perform on its child node
also for any given node a[i], its left child node will be arr[i*2+1] & right child node will be arr[i*2+2]
for ex:> parent node can be sum or difference or minimum of its both child.
Application:> In dynamic and static range sum or range minimum query, etc. 
8
4 7 9 14 8 3 6 5
56 34 22 11 23 11 11 4 7 9 14 8 3 6 5 
(56 34 22 11 23 11 11 sub array sum of there child nodes)
(4 7 9 14 8 3 6 5 actual array of values)

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[2*n-1]={0};
    for(int i=n-1; i<(2*n)-1; i++)
    {
        cin >> arr[i]; // filing up the leaf node 
    }
    for(int i=n-2; i>=0; i--)
    {
        arr[i]=arr[i*2+1]+arr[i*2+2]; // filing up the other parent node according to the problem need
    }
    for(int i=0; i<(2*n)-1; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}