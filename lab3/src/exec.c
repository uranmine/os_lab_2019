#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
  printf("Программа %s будет выполнена...\n\n",
         argv[0]);
  printf("Выполняется %s", argv[0]);
  execv("sequiential_min_max", argv);
  return 0;
}