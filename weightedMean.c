#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float z=0,y=0;
    int w[50];
    int x[50];
    int n,i,j;
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&w[i]);
         
     }
     for(i=0;i<n;i++)
     {
          scanf("%d",&x[i]);
         y+=x[i];
         
     }
   
    for(i=0;i<n;i++)
    {     
          z+=w[i]*x[i];
        
    }
    printf("%.1f",z/y);
    return 0;
}

