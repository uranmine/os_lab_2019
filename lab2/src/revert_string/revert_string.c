#include "revert_string.h"
#include <stdlib.h>
#include <string.h>
void RevertString(char *str)
{
    int i,j;
    int lengh = strlen(str);
    char buff;

    for (i=0, j=lengh-1; i<j; i++, j--)
    {
        buff = str[i];
        str[i] = str[j];
        str[j] = buff;
    }
}

