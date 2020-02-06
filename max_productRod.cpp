#include <iostream>
#define ll long long int
using namespace std;
#include <bits/stdc++.h>

/*ll max(ll a,ll b,ll c)
{
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else 
        return c;    
        
}*/

int main() {
    ll n;
    cin>>n;
    ll result[n+1];
    for(ll i=0;i<=n;i++)
    {
        result[i]=0;
    }
    
    for(ll i=2;i<=n;i++)
    {
        for(ll j=1;j<(i/2)+1;j++)
        {
            result[i]=max(result[i],max(j*(i-j),j*result[i-j]));
        }
    }
    
    cout<<result[n]<<endl;
  
	return 0;
}
