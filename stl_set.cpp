#include <bits/stdc++.h>
using namespace std;
 
int main() {
	set <int> S;
	for(int i=1; i<=10; i++)
	{
		int x;
		cin>>x;
		S.insert(x);
	}
	cout<<S.size()<<endl;
	if(S.empty())cout<<"empty\n";
	set <int> :: iterator it; //Refer to the tutorial on iterator if you do not understand this.
	for(it=S.begin(); it!=S.end(); ++it)
	cout<<*it<<" ";
	cout<<endl;
	cout<<*(S.begin())<<endl;
	cout<<*(S.rbegin())<<endl;
	S.erase(6);
	S.erase(8);
	return 0;
}
