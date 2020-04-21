#include <stdio.h>

int main(void) {
    int t,p1,p2,k,sum;
	scanf("%d",&t);
	while(t--)
	{
	    	scanf("%d",&p1);
	    	scanf("%d",&p2);
	    		scanf("%d",&k);
	    		sum=p1+p2;
	    		sum=sum/k;
	    		if(sum%2!=0)
	    		{
	    		    printf("COOK\n");
	    		}
	    		else
	    	     	printf("CHEF\n");
	}
	return 0;
}