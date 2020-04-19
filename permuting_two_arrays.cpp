#include <bits/stdc++.h>
using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    for (int i=0;i<A.size();i++)
        {if (A[i]+B[i]<k)    
            return "NO";}
    return "YES";

}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,temp;
        cin>>n>>k;
        vector<int> A;
        vector<int> B;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            A.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            B.push_back(temp);
        }
        string r=twoArrays(k,A,B);
        cout<<r<<endl;
    }
    return 0;
}

