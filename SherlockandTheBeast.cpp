#include <bits/stdc++.h>
#define ll long long
using namespace std;

void decentNumber(ll n) {
    ll five_count=n;
    ll three_count=0;
    for(ll i=0;i<n+2;i++)
    {  
        if(five_count%3!=0||three_count%5!=0||(five_count%3!=0&&three_count%5!=0))
        {
            five_count--;
            three_count++;
        }

    }

    if(five_count==0)
    {
        while(three_count--)
            cout<<"3";
        cout<<endl;    
    }
   
    else if(three_count==0)
    {
        while(five_count--)
            cout<<"5";
        cout<<endl;      
    }
    
    else if(five_count%3==0&&three_count%5==0)
    {   for(ll j=0;j<five_count;j++)
            {cout<<"5";}
            
        for(ll j=0;j<three_count;j++)
            {cout<<"3";}
            
        cout<<endl;      

    }
    else {
        cout<<-1<<endl;
    }
    
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        decentNumber(n);
    }

    return 0;
}



