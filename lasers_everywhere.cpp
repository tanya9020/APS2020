#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
# define ll long long

int main() 
{ 
    ll t;
    cin>>t;
    while(t--){
        ll n,q,Ai;
        cin>>n>>q;
        ll arr[n+1];
        for(ll i=1;i<n+1;i++)
        {
            cin>>Ai;
            arr[i]=Ai;
        }
        
        /*for(int i=1;i<n+1;i++){
            cout<<i<<" "<<arr[i]<<endl;
        }*/
        
        for(ll i=0;i<q;i++)
        {
            int x1,x2,y;
            ll cnt=0;
            cin>>x1>>x2>>y;
            for(ll j=x1;j<=x2-1;j++)
            {
                //cout<<arr[j]<<" "<<arr[j+1]<<endl;
                
                if((arr[j]<=y&&arr[j+1]>=y)||(arr[j]>=y&&arr[j+1]<=y))
                    cnt++;
            }
            cout<<cnt<<endl;
        
        }
    }
    
    return 0;
}