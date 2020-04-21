#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define size 400
#define iters 1

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
    //    printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return ;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
   // printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
    return;
}

int main()
{   clock_t start,end;
    int n =40; // Number of disks
    start=clock();
     int j;
     for(j=0;j<iters;j++)
      towerOfHanoi(n, 'A', 'C', 'B');

     end=clock();

   double t;
   t=(end-start)/CLOCKS_PER_SEC;

   printf("time taken is %g seconds.\n",t/iters);   // A, B and C are names of rods


    return 0;
}
