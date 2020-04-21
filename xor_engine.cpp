#include <iostream>
using namespace std;
#define ll long long 

ll compute(ll n) {
    ll c=0;
    while(n){
    n=n&n-1;
    c++;
    }
	return c;
}	

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
	    ll n,q;
	    scanf("%lld %lld",&n,&q);
        ll arr[n];
        
        for(ll i=0;i<n;i++)
            scanf("%lld",&arr[i]);
            
        ll qarr[q];
        for(ll i=0;i<q;i++)
            scanf("%lld",&qarr[i]);
            
        ll ceven=0,codd=0,r;
        for(ll j=0;j<n;j++)
         {
            r=compute(arr[j]);
            if(r%2!=0)
                codd++;
            else
                ceven++;
         }
         
         for(ll i=0;i<q;i++)
         {
             r=compute(qarr[i]);
             if(r%2!=0)
                printf("%lld %lld\n",codd,ceven); 
             else
                printf("%lld %lld\n",ceven,codd);
             
         }
 
	}
	return 0;
}
