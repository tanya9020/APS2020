#include <bits/stdc++.h>
#define ll long long
using namespace std;
#include <iostream> 
#include <algorithm> 

using namespace std; 


void maxPerimeter(ll arr[], ll n){ 

  
    ll maxi = 0; 
    ll m1=0,m2=0,m3=0;

    for (ll i = 0; i < n - 2; i++){ 
        for (ll j = i + 1; j < n - 1; j++){ 
            for (ll k = j + 1; k < n; k++){ 


                ll a = arr[i]; 
                ll b = arr[j]; 
                ll c = arr[k]; 
                
                if (a < b+c && b < c+a && c < a+b){ 
                    if(a+b+c>maxi)
                    {
                        m1=a;
                        m2=b;
                        m3=c;
                        maxi=a+b+c;
                    }

                } 
            } 
        } 
    } 

    if (maxi) cout <<m1<<" "<<m2<<" "<<m3;
    else cout <<"-1";
} 


int main() 
{ 
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    maxPerimeter(arr, n); 
    return 0; 
} 

