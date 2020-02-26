#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
int n=5,k=2;
int C[n+1][k+1];
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=min(i,k);j++)
    {
        if(j==0||j==i)
            C[i][j]=1;
        else
            C[i][j]=C[i-1][j-1]+C[i-1][j];
    }

}
cout<<C[n][k];
return 0;

}
