#include <iostream>
using namespace std;

int checkprime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{   int x,y;
	    cin>>x>>y;
	    int z=x+y;
	    for(int i=z+1;i<1000+z;i++)
	    {
	        if(checkprime(i))
	        {
	            cout<<i-z<<endl;
	            break;
	        }
	    }
	        
	}
	return 0;
}
