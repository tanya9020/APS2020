#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void juggler(int n)
{
    int a=n;
    cout<<a<<" ";
    while(a!=1)
    {
        int b=0;
        if(a%2==0)
            b=floor(sqrt(a));
        else
            b=floor(sqrt(a)*sqrt(a)*sqrt(a));
        cout<<b<<" ";
        a=b;
    }
}

int main() {

	int n;
	cin>>n;
	juggler(n);
	return 0;
}

