#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *small_array, *larger_array;
  // (int *)malloc(5*sizeof(int));
  small_array=(int *)malloc(5 * sizeof(int));
  small_array[0] =1, small_array[1]= 4, small_array[4] =7;

  //create larger arrray 
  larger_array=(int *)malloc(10 * sizeof(int));
  for(int i =0; i < 5; i++){
    //assign values of smaller array to larger array
    larger_array[i] = small_array[i];
  }

  //free smaller array memory
  free(small_array);
  //assign smaller_array to point larger array.
  small_array = larger_array;
  //set larger array pointer to null;
  larger_array = NULL;

  for(int x=0; x < 5; x++){
    printf("%d ", small_array[x]);
  }


}