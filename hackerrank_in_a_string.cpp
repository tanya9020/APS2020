#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <bits/stdc++.h>
// Complete the hackerrankInString function below.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string s="hackerrank";
        if(s.length()>str.length())
           {  
               cout<<"NO"<<endl;
            }
       else{ int j=0;
        for(int i=0;i<str.length();i++)
        {
            if(j<s.length()&&s[j]==str[i])
                j++;
        }
        if(j==s.length())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
    }}
    return 0;
}

