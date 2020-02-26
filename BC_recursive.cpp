#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int compute(int n,int k)
{
    if(n==k||k==0)
        return 1;
    else
        return compute(n-1,k-1)+compute(n-1,k);

}

int main() {
int n=5,k=2,r;
r=compute(n,k);
cout<<r;
return 0;
}
