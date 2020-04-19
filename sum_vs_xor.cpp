#include <bits/stdc++.h>
#define ll long long
using namespace std;

long sumXor(long n) {
    int zeros=0;
    while(n)
    {
        if (n%2==0) zeros++;
        n/=2;
    }
    return pow(2, zeros);
}

int main()
{
   long n;
   cin>>n;
    long result = sumXor(n);
    cout << result << "\n";
    return 0;
}
