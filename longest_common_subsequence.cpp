#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    string s1="";
    string s2="";
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    int matrix[n+1][m+1];
    
    for(int i = 0 ; i < n; i++)
        matrix[i][0] = 0;

    for(int i = 0; i <= m; i++)
        matrix[0][i]=0;
    
        
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                    matrix[i][j]= 1 + matrix[i-1][j-1];
                else
                    matrix[i][j]=max(matrix[i][j-1],matrix[i-1][j]);

            }

    }

    cout<<matrix[n][m];

	return 0;
}
