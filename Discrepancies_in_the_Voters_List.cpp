#include <iostream>
using namespace std;
#include<vector>
#include <bits/stdc++.h>

int main() {
	// your code goes here
	int n1,n2,n3,d;
	cin>>n1>>n2>>n3;
	vector<int>v;
	int arr[1000000]={0};
	for(int i=0;i<(n1+n2+n3);i++)
	{
	    cin>>d;
	    arr[d]++;
	    if(arr[d]==2)
	        v.push_back(d);
	}
	sort(v.begin(),v.end());
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
	    cout<<v[i]<<endl;
	}
	return 0;
}
