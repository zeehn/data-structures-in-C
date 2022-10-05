#include <stdio.h>

// This program finds union of two sorted arrays and store it in a third array.

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

void union_sorted(struct Array arr1, struct Array arr2, struct Array *arr3){
  int i = 0, j = 0, k = 0;
  while(i < arr1.length && j < arr2.length){
    if(arr1.A[i] < arr2.A[j]){
      arr3->A[k++] = arr1.A[i++];
    }
    else if(arr2.A[j] < arr1.A[i]){
      arr3->A[k++] = arr2.A[j++];
    }
    else {
      arr3->A[k++] = arr1.A[i++];
      j++;
    }
  }
  while(i < arr1.length)
    arr3->A[k++] = arr1.A[i++];
  while(j < arr2.length)
    arr3->A[k++] = arr2.A[j++];
  arr3->length = k;
}

int main(){
  struct Array arr1 = {{3, 4, 5, 6, 10}, 12, 5};
  struct Array arr2 = {{2, 4, 5, 7, 12}, 12, 5};
  struct Array arr3;
  arr3.size = 12;

  display(&arr1);
  display(&arr2);

  union_sorted(arr1, arr2, &arr3);

  display(&arr3);

  return 0;
}
