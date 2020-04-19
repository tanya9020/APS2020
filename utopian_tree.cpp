#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    int r=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            r++;
        else
            r=r*2;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << "\n";
    }

    return 0;
}

