#include <bits/stdc++.h>

using namespace std;
  
int main()
{
    int count =0; int max = 0; int n; 
    cin >> n;
while(n)
{
    if (n&1){
        count++;
    } else {
        count = 0;
    }
    if (max < count)
        max = count;
   // n=n/10;
    n>>=1;
}
cout << max;
return 0;
}
