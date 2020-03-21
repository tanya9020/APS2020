#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int josephus(int n,int k)
{
    int res=0;
    for(int i=1;i<=n;i++)
        res=(res+k)%i;
    return res+1;
}

int main() {
    int n,k;
    cin>>n>>k;
    int r=josephus(n,k);
    cout<<r;
	return 0;
}
