#include <bits/stdc++.h>
using namespace std;
int main()
{
int test,n,i,j;
scanf("%d",&test);
while(test--)
{
    scanf("%d",&n);
    
    if(n==1)
        printf("1\n1 1\n");
    else if(n==2)
        printf("1\n2 1 2\n");
    else if(n==3)
        printf("1\n3 1 2 3\n");
    else
    {
        printf("%d\n",n/2);
        if(n%2==0)
        {
            printf("3 1 2 3\n");
            for(i=4;i<=n;i+=1)
                printf("1 %d \n",i);
            //for(i=1;i<n;i+=2)
              //  printf("2 %d %d\n",i,i+1);
                
        }
        else
        {
            printf("3 1 2 3\n");
            for(i=4;i<n;i+=2)
                printf("2 %d %d\n",i,i+1);
        }
    }
    
}
return 0;
}
