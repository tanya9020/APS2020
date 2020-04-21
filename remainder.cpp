#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long int n,m,z;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    z=n%m;
	    if(z%2==0)
	        cout<<"EVEN"<<endl;
	   else
	        cout<<"ODD"<<endl;
	}
	
	return 0;
}
