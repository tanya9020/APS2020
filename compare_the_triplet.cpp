#include <bits/stdc++.h>

using namespace std;

int main()
{
    int alice[3];
    int bob[3];
    for(int i=0;i<3;i++)
    {
        cin>>alice[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>bob[i];
    }
    int cnta=0,cntb=0;
    for(int i=0;i<3;i++)
    {
        if(alice[i]>bob[i])
            cnta++;
        else if(alice[i]<bob[i])
            cntb++;    
    }
    cout<<cnta<<" "<<cntb;



    return 0;
}

