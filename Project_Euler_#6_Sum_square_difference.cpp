#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll s1=(n*(n+1))/2;
        s1=s1*s1;
        ll s2;
        s2=n*(n+1)*(2*n+1)/6;
        cout<<s1-s2<<endl;   
    }
    return 0;
}

