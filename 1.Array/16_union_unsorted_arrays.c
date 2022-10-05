#include <stdio.h>

// This program finds the union of two unsorted arrays and store the elements in a third array.

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

void union_unsorted(struct Array arr1, struct Array arr2, struct Array *arr3){
  int i, j = 0;
  for(i = 0; i < arr1.length; i++){
    arr3->A[i] = arr1.A[i];
  }
  arr3->length = i;
  for(i = 0; i < arr2.length; i++){
    j = 0;
    while(j < arr3->length){
      if(arr3->A[j] == arr2.A[i])
        break;
      j++;
    }
    if(j == arr3->length){
      arr3->A[arr3->length++] = arr2.A[i];
    }
  }
}

int main(){
  struct Array arr1 = {{3, 5, 10, 4, 6}, 12, 5};
  struct Array arr2 = {{12, 4, 7, 2, 5}, 12, 5};
  struct Array arr3;
  arr3.length = 0;
  arr3.size = 12;

  display(&arr1);
  display(&arr2);

  union_unsorted(arr1, arr2, &arr3);
  display(&arr3);

  return 0;
}
