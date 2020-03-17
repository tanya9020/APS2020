#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int root(int a[],int i)
{
    while(a[i]!=i)
        i=a[i];
    
    return i;    
}

void union1(int *a, int u, int v)
{
    int rootu=root(a,u);
    int rootv=root(a,v);
    a[rootu]=rootv;
}

int find(int *a, int u, int v)
{
    if(root(a,u)==root(a,v))
        return 1;
    else
        return 0;
}



int main() {
    int arr[8]={0,1,2,3,4,5,6,7};
    union1(arr,0,1);
    union1(arr,0,5);
    union1(arr,3,4);
    union1(arr,5,3);
    union1(arr,1,6);

    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}    
