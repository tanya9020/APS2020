#include <bits/stdc++.h>
using namespace std;

int reverse_no(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}

int main() {
    int n;
    cin>>n;
    int r=n-reverse_no(n);
    cout<<r;
	return 0;
}
