#include <iostream>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll w[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>w[i];
	    }
	    ll min=9999999;
	    for(ll i=0;i<n;i++)
	    {
	        if(w[i]<min)
	            min=w[i];
	    }
       // cout<<min<<endl;
       int r=0;
       for(ll i=0;i<n;i++)
	    {
	        r+=w[i]-min;
	    }
       cout<<r<<endl;
	}
	return 0;
}
