#include "find_min_max.h"

#include <limits.h>

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
  struct MinMax min_max;
  min_max.min = array[0];
  min_max.max = array[0];

  //INT_MAX = array[0];
  //INT_MIN = array[0];
  int i;

  for (i=begin; i<end; i++)
  {
      if (array[i]<min_max.min) 
      {
          min_max.min=array[i];
      }
      if (array[i]>min_max.max) 
      {
          min_max.max=array[i];
      }
  }
  
  return min_max;
}
