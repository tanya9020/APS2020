#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int binarySearch(int arr[],int l,int r,int s)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==s)
            return mid;
        if(arr[mid]>s)
            r=mid-1;
        else    
            l=mid+1;
    }
    return -1;
}

int main() {
	// your code goes here
	int n,s;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"enter element to search"<<endl;
	cin>>s;
	int res=binarySearch(arr,0,n-1,s);
	if(res>=0)
	    cout<<"element found at "<<res<<endl;
	else
	    cout<<"element not found"<<endl;

	return 0;
}
