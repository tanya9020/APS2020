#include <bits/stdc++.h>
#define ll long long int
#define inf 1e8
using namespace std;

int main() {
	// your code goes here
	ll test,i,j,n,m;
	cin>>test;
	while(test--)
	{
	    cin>>n>>m;
	    map<ll,ll> mp;
	    ll arr[n+1],arr1[n+5];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++)
	        cin>>arr1[i];
	   for(i=0;i<n;i++)
	   {
	       mp[arr[i]]+=arr1[i];
	   }
	   ll mx=inf;
	   for(auto it:mp)
	   {
	       mx=min(mx,it.second);
	   }
	   cout<<mx<<endl;
	   
	}
	return 0;
}
