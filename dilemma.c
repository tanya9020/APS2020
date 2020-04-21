#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// your code goes here
	long long int t;
    scanf("%lld",&t);
    while(t--)
    {
	char str[100000];
    scanf("%s", str);
    long long int length;
    length=strlen(str);
    long long int count = 0;

    for (int i = 0; i <length; i++)
     if (str[i] == '1')
      count++;

    if(count%2){
      printf("WIN");
      printf("\n");  
    }

    else
      printf("LOSE");
      printf("\n");  
    }
    return 0;
}