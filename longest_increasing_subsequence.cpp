#include<bits/stdc++.h> 
using namespace std; 
	
int main() 
{ 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	int lis[n]={1};

	for (int i = 1; i < n; i++ ) 
	{ 
	for (int j = 0; j < i; j++ ) 
		if ( arr[i] > arr[j] && lis[i] < lis[j] + 1) 
			lis[i] = lis[j] + 1; 
	} 

	cout<< *max_element(lis, lis+n); 
	/* for(int i=0;i<n;i++)
	{
	cout<<lis[i];
	}*/
	return 0; 
}
