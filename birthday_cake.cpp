#include <bits/stdc++.h>
#include <iostream> 
#include <algorithm>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
   
    for(ll i=0;i<n;i++)
    {   
        cin>>arr[i];
    }
     ll max=arr[0];

    for(ll i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }   

    ll c=0;
    for(ll i=0;i<n;i++)
    {   
        if (max==arr[i])
            c++;
           
    }
    cout<<c<<endl;
    return 0;
}

