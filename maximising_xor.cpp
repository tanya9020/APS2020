#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
int m=0,temp=0;
for(int i=l;i<=r;i++)
{
    for(int j=l;j<=r;j++)
    {
        temp=i^j;
        if(temp>m)
            m=temp;
    }
}
return m;
}

int main()
{
    int l,r;
    cin>>l>>r;
    int result = maximizingXor(l, r);
    cout << result << "\n";
    return 0;
}

