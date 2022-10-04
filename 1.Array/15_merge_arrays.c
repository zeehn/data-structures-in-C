#include <stdio.h>
#include <stdlib.h>

// This program merges two sorted arrays. The resultant array should be sorted too.

struct Array {
  int A[12];
  int size;
  int length;
};

void display(struct Array *arr){
  int i;
  for(i = 0; i < arr->length; i++){
    printf("%d ", arr->A[i]);
  }
  printf("\n");
}

struct Array* merge_arrays(struct Array arr1, struct Array arr2){
  int i = 0, j = 0, k = 0;
  struct Array *arr3;
  arr3 = (struct Array *)malloc(sizeof(struct Array));
  arr3->size = arr1.length + arr2.length;
  arr3->length = arr1.length + arr2.length;

  while(i < arr1.length && j < arr2.length){
    if(arr1.A[i] < arr2.A[j]){
      arr3->A[k] = arr1.A[i];
      i++;
      k++;
    }
    else {
      arr3->A[k] = arr2.A[j];
      j++;
      k++;
    }
  }

  while(i < arr1.length){
    arr3->A[k] = arr1.A[i];
    i++;
    k++;
  }
  while(j < arr2.length){
    arr3->A[k] = arr2.A[j];
    j++;
    k++;
  }

  return arr3;
}

int main(){
  struct Array arr1 = {{2, 4, 5, 7, 9, 15}, 6, 6};
  struct Array arr2 = {{3, 8, 11, 14, 17, 21}, 6, 6};

  display(&arr1);
  display(&arr2);

  struct Array *arr3;
  arr3 = merge_arrays(arr1, arr2);

  display(arr3);
 
  free(arr3);
  return 0;
}
