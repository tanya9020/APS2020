#include <bits/stdc++.h>
#define ll long long int
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll cg=arr[0];
    ll cg1=0;
    ll cb1=0;
    ll cb=arr[0];
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>cg)
           { cg1++;
            cg=arr[i];}
        else if(arr[i]<cb) 
            {cb1++; 
             cb=arr[i];
            }
    }

    cout<<cg1<<" "<<cb1<<endl;

    return 0;
}

