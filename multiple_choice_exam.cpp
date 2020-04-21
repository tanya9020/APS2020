#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll score=0;
	    char correct[n];
	    char answer[n];
	    for(ll i=0;i<n;i++)
	       cin>>correct[i];
	       
	    for(ll i=0;i<n;i++)
	       cin>>answer[i]; 
	       
	   int flag=0;    
	       
	    for(ll i=0;i<n;i++)
	    {  
	             if(correct[i]==answer[i])
	               score++;
	             else if(answer[i]!='N' )  
	               i++;
	     	       
    
	    }	     cout<<score<<endl;

	    
	}
	return 0;
}
