#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rand.h"

void Ran_D (char *str)
{
    int i;
    int lengh = strlen(str);
    int a[lengh];
    double summ=0;
     for (i=0; i<lengh; i++)
    {
       a[i] = (int)str[i] - 48;
       summ=a[i]+summ;
    }
    summ=summ/lengh;
    printf("%d\n", lengh);
    printf("%lf\n", summ);

}