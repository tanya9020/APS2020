#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
#define mod 1000000007 

int main()
{
    ll test,n,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ll arr[n+5];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<ll>());
        ll sum=0,zero=0;
        for(i=0;i<n;i++)
        {
            sum=sum + max(arr[i]-i,zero);
        }
        cout<<sum%mod<<endl;
    }
    return 0;
}
