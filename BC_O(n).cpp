#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	int n=5,k=2;
	int C[k+1]={0};
	C[0]=1;
	for(int i=1;i<=n;i++)
	{
	    for(int j=min(i,k);j>0;j--)
	    {
	        C[j]=C[j]+C[j-1];
	    }
	}

	cout<<C[k];
	return 0;
}
