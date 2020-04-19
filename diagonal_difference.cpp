#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int rd=0,ld=0;
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
                cin>>arr[i][j];
    }
    
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
             if(i==j)
                rd+=arr[i][j];
                
             if((i+j)==(n-1))
                ld+=arr[i][j];
                
         }

    }

    cout<<abs(rd-ld);

    return 0;
} 

