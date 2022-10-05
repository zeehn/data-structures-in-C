#include <stdio.h>

// This program finds the intersection of two unsorted integer arrays & stores them in a third array.

struct Array {
  int A[10];
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

void intersection_unsorted(struct Array arr1, struct Array arr2, struct Array *arr3){
  int i, j, k = 0;
  for(i = 0; i < arr1.length; i++){
    for(j = 0; j < arr2.length; j++){
      if(arr1.A[i] == arr2.A[j]){
        arr3->A[k++] = arr1.A[i];
        continue;
      }
    }
  }
  arr3->length = k;
}

int main(){
  struct Array arr1 = {{3, 5, 10, 4, 12}, 10, 5};
  struct Array arr2 = {{12, 4, 7, 2, 5}, 10, 5};
  struct Array arr3;
  arr3.size = 10;

  display(&arr1);
  display(&arr2);

  intersection_unsorted(arr1, arr2, &arr3);

  display(&arr3);

  return 0;
}
