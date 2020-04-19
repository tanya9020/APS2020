#include <bits/stdc++.h>
#define ll long long
using namespace std;

void countApplesAndOranges(ll s, ll t, ll a, ll b, vector<ll> apples, vector<ll> oranges) {
    ll a_count=0,o_count=0;

    for(ll i=0;i<apples.size();i++)
    {
        ll result=a+apples[i];
        if(result>=s && result<=t)
        {a_count++;}
    }
    cout<<a_count<<endl;
    
    for(ll i=0;i<oranges.size();i++)
    {
        ll result=b+oranges[i];
        if(result>=s && result<=t)
        {o_count++;}
    }
    cout<<o_count<<endl;
}

int main()
{
    ll s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    vector<ll> apples;
    vector<ll> oranges;
    ll temp;
    
    for(ll i=0;i<m;i++)
       {cin>>temp;
        apples.push_back(temp); }

    for(ll i=0;i<n;i++)
       {cin>>temp;
        oranges.push_back(temp); }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}


