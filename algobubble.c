#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define size 10000
#define iters 10

void bubble_sort(int a[])
{
int c, d, swap;
for (c = 0 ; c < size - 1; c++)
    for (d = 0 ; d < size - c - 1; d++)

      if (a[d] > a[d+1]) /* For decreasing order use < */
      {
        swap       = a[d];
        a[d]   = a[d+1];
        a[d+1] = swap;
      }

}

int main()
{
  int a[size], c, d, swap,i;
  clock_t start,end;

   for(i=0;i<size;i++)
      a[i]=rand()%1000;

 start=clock();
 int j;
 for(j=0;j<iters;j++)
   bubble_sort(a);

 end=clock();

   double t;
   t=(end-start)/CLOCKS_PER_SEC;

   printf("time taken is %g seconds.\n",t/iters);

 // printf("Sorted list in ascending order:\n");

  //for (c = 0; c < n; c++)
    // printf("%d\n", array[c]);

  return 0;
}
