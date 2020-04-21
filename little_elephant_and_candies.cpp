#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,c;
	cin>>t;
	int flag=0;
	long long int happy;
	while(t--)
	{
	    cin>>n>>c;
	    while(n--)
	    {
	        cin>>happy;
	        if(happy<=c)
	        {
	            c=c-happy;
	        }
	        else
	            c=c-happy;
	       
	    }
	    
	    if(c>=0)
	        cout<<"Yes"<<endl;
	   else
	        cout<<"No"<<endl;
	   
	}
	
	return 0;
}
