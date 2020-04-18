#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    int a,b;
	float num1,num2;
 
    scanf("%d%d",&a,&b);
     scanf("%f%f",&num1,&num2);
   
     printf("%d %d\n",a+b,a-b);
     printf("%0.1f %0.1f",num1+num2,num1-num2);
    

    return 0;
}
