#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y,K,N,page,price;
	cin>>T;

	while(T--)
	{
	    int flag=0;
	    cin>>X>>Y>>K>>N;
	    int z=X-Y;
	    while(N--)
	    {
	        cin>>page>>price;
	        if(price<=K&&z<=page)
	            {
	                
	                flag=1;
	            }
	    }
	    
if(flag==0)
    cout<<"UnluckyChef"<<endl;

else    
    cout<<"LuckyChef"<<endl;

	}	
	


	return 0;
}
