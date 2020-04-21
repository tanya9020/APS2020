#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
    long long int n;
    cin>>n;
    long long maxPrime = -1; 
  
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1; 
    } 
   
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
  
    if (n > 2) 
        maxPrime = n; 
  
    cout<< maxPrime<<endl; 

}
    return 0;
}

