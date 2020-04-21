#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
ll fib(ll n)
{
  //int f[n+1];
  ll i=1;
  ll sum=0;
  ll f0 = 2;
  ll f1 = 8;
  ll temp=0;
  while(f1<=n)
  {
     
         sum+=f1;
             
      temp = 4*f1 + f0;
      f0=f1;
      f1=temp;
  }
  return sum+2;
  
}
 
int main ()
{ ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
          cout<<fib(n)<<"\n";
    }
      return 0;        
}

