#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int divisibleSumPairs(int n, int k, int ar[]) {
    int cnt=0;
    for(int i=0;i<n;i++)
    {
         for(int j=i+1;j<n;j++)
         {
             if((ar[i]+ar[j])%k==0)
                cnt++;
         }

    }
    return cnt;
}

int main()
{
    int n,k,temp;
    cin>>n>>k;
    int ar[n];

    for (int i = 0; i < n; i++) {
       cin>>ar[i];
    }

    int result = divisibleSumPairs(n, k, ar);
    cout << result << "\n";
    return 0;
}


