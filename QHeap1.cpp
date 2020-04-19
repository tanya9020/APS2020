#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   set <ll> s;
   ll test;
    cin>>test;
    while(test--)
    {
        ll a,b;
        cin>>a;
        if(a==1)
        {
            cin>>b;
            s.insert(b);
        }            
        else if(a==2)
        {
            cin>>b;
            s.erase(b);
        }
        else
            cout<<*s.begin()<<endl;
    }
    return 0;
}

