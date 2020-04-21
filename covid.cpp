#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main()
{
    ll test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        vector <ll> v;
        for(i=0;i<n;i++)
        {
            cin>>j;
            if(j)
                v.pb(i);
        }
     
        bool flag=0;
        for(auto it=v.begin();it+1!=v.end();it++)
        {
            if(*(it+1)-*it<6)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }
    return 0;
}
