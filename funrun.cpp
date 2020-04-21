#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int brr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++)
	        cin>>brr[i];
	        
	    sort(arr,arr+n);
	    sort(brr,brr+n);
	    if(arr[n-1]!=brr[n-1])
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
