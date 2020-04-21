#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll cnt=0,prev=0;
        while(q--)
        {
            ll s,d;
            cin>>s>>d;
            cnt+=abs(prev-s)+abs(s-d);
            prev=d;
        }
        cout<<cnt<<endl;
    }
	return 0;
}
