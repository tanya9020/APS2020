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

int count_occurence(int arr[],int n,int s)
{
    int index=binarySearch(arr,0,n-1,s);
    if(index==-1)
        return 0;
    else
        {
            int cnt=0;
            int left=index;
            while(left>=0 && arr[left]==s)
            {
                cnt++;
                left--;
            }
            int right=index+1;
            while(right<n && arr[right]==s)
            {
                cnt++;
                right++;
            }
            return cnt;
            }
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
	cout<<"enter element"<<endl;
	cin>>s;
	cout<<count_occurence(arr,n,s);
	

	return 0;
}
