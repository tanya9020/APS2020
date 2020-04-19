#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    long c[m];
    for (int i=0;i<m;i++) cin >> c[i];

   long numways[n+1]={0};
    numways[0]=1; 
    
    
    for (int i=0;i<m;i++) {
        for (int j=c[i];j<=n;j++) {
            numways[j]+=numways[j-c[i]]; 
        }
    }    

    cout << numways[n];    
    return 0;
}

