#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll arr[n];
	    ll s=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        s+=arr[i];
	    }
	   // cout<<s;
	    s=s%k;
	    cout<<s<<endl;
	}
	return 0;
}
