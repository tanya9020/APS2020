#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float arr[2500];
    int n,i,j;
    float mean=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        mean+=arr[i];
    }
    int temp=0;
    printf("%.1f\n",mean/n);
    for(i=0;i<n-1;i++)
    {
         for(int j=0;j<n-i-1;j++)
         {
             if (arr[j]>arr[j+1])
             {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
                  
             }
         }
             
    }

   
   if(n%2!=0)
   printf("%.1f",arr[n/2]);
    else
    printf("%.1f",(arr[n/2]+arr[(n/2)-1])/2);
   
   int mode=0;
    int m=0;
   for (int i = 0; i < n; i++)
   {
       int count=0;
       for(j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
               count++;
       }
       if(count>m)
           m=count;
       
       
       
   }
    for (int i = 0; i < n; i++)
   {
       int count=0;
       for(j=0;j<n;j++)
       {
           if(arr[i]==arr[j])
               count++;
       }
       if(count==m)
       {
           mode=arr[i];
            break;
       }
       
       
   }
   printf("\n%d",mode);
    return 0;
}


