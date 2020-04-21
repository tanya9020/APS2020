#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll b[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(ll i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    sort(a,a+n);
	    sort(b,b+n);
	    ll c=0;
	    for(ll i=0;i<n;i++)
	    {
	        if(a[i]<b[i])
	            c+=a[i];
	        else
	            c+=b[i];
	    }
	    cout<<c<<endl;
	}
	return 0;
}
