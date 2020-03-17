#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void union1(int a[], int n, int u, int v)
{
    int temp=a[u];
    for(int i=0;i<n;i++)
    {
        if(a[i]==temp)
            a[u]=a[v];
    }
}

int find(int a[], int u, int v)
{
    if(a[u]==a[v])
        return 1;
    else
        return 0;
}

int main() {
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    union1(arr,10,2,1);
    union1(arr,10,4,3);
    union1(arr,10,8,4);
    union1(arr,10,9,3);
    union1(arr,10,6,5);

    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
    int r=find(arr,0,7);
    cout<<r<<endl;
    r=find(arr,8,9);
    cout<<r<<endl;
    return 0;
}    
