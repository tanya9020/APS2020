#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[2*n];
	arr[1]=1;
	for(int i=2;i<=2*n;i++)
	{
	    arr[i]=arr[i-1]*i;
	}
	
	int result=0;
	result=arr[2*n]/(arr[n]*arr[n+1]);
	cout<<result;
	
	return 0;
}
