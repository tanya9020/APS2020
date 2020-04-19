#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int B[n];
    int cnt=0,sum=0;

    for(int i =0;i<n;i++)
    {
        cin>>B[i];
        sum+=B[i];

    }

    if(sum%2!=0){
        cout<< "NO";
    }
    else{
    for(int i =0;i<n;i++)
    {
        if(B[i]%2!=0)
        {
            B[i]++;
            B[i+1]++;
            cnt+=2;
        }
    }
    cout<<cnt;}
    return 0;
}


