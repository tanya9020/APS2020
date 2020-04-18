#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,mul,i;
    cin >> n;
    for(i=1;i<11;i++)
    {
        mul=n*i;
        printf("%d x %d = %d\n",n,i,mul);
    }   

    return 0;
}

