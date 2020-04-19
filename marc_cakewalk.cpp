#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

long marcsCakewalk(vector<int> calorie) {
long res=0;
sort(calorie.begin(),calorie.end(),greater<int>());
for(long i=0;i<calorie.size();i++)
{
    res+=pow(2,i)*calorie[i];
}

return res;
}

int main()
{
    int n,temp;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        ar.push_back(temp);
    }
    long result=marcsCakewalk(ar);
    cout<<result;
    return 0;
}

