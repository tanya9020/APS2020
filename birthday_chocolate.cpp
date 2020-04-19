#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int cnt=0;
    for(auto it=s.begin();it!=s.end();it++)
    {
        if(d==std::accumulate(it,it+m,0))
            cnt++;
    }
    return cnt;

}

int main()
{
    int n,d,m,temp;
    cin>>n;
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        s.push_back(temp);
    }
    cin>>d>>m;
    int result=birthday(s,d,m);
    cout<<result;
    return 0;
}
