#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int root(int a[],int i)
{
    while(a[i]!=i)
        i=a[i];
    
    return i;    
}

void weighted_union1(int a[],int size[],int u, int v)
{
    int rootu=root(a,u);
    int rootv=root(a,v);
    if(size[rootu]<size[rootv])
        {a[rootu]=a[rootv];
        size[rootv] += size[rootu];}
    else
       { a[rootv]=a[rootu];
        size[rootu] += size[rootv];}
}

int main() {
    int arr[6]={0,1,2,3,4,5};
    int size[6];
   for(int j=0;j<6;j++)
    {
        size[j]=1;
    }
    weighted_union1(arr,size,0,1);
    weighted_union1(arr,size,1,2);
    weighted_union1(arr,size,2,3);
 
    for(int i=0;i<6;i++)
        cout<<size[i]<<" ";
    
    return 0;
}    

/*
def weightedUnion(a,size,u,v):
    rootu=root(a,u)
    rootv=root(a,v)
    if(size[rootu]<size[rootv]):
        a[rootu]=a[rootv]
        size[rootv] += size[rootu]
    else:
        a[rootv]=a[rootu]
        size[rootu] += size[rootv]


a=[i for i in range(6)]
size=[1 for _ in range(len(a))]
weightedUnion(a,size,0,1)
weightedUnion(a,size,1,2)
weightedUnion(a,size,3,2)
print(size)*/
