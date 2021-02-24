#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rand.c"
#include "rand.h"
int main()
{
    char a[150];
    int i;
    for (i=0; i<150; i++)
    {
        a[i] = rand () % 150 +1;
        printf( "%d\n", a[i]);
    }

    Ran_D(a);

    //for (i=0; i<15; i++)
    //{
   //     all = all+a[i];
   //     j++;
   // }
   // all=all/j;
   // printf("%lf\n", all);
    //printf("%d\n", j);
}