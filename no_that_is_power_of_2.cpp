#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	// your code goes here
	int n,i,r,cnt=0,s=0;
	cin>>r;
	for(i=1;i<=r;i++)
	{
	   if(i != 0 && (i & (i-1)) == 0)
	   {
	       cnt++;
	       s+=i;
	   }
	   
	}
	cout<<"cnt="<<cnt<<endl;
	cout<<"sum="<<s;
	return 0;
}
