#include <stdio.h>

// This program finds the difference (A - B) between two sorted arrays and stores them in a third array.

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

void difference_sorted(struct Array arr1, struct Array arr2, struct Array *arr3){
  int i = 0, j = 0, k = 0;
  while(i < arr1.length && j < arr2.length){
    if(arr1.A[i] == arr2.A[j]){
      i++;
      j++;
    }
    else if(arr1.A[i] > arr2.A[j]){
      j++;
    }
    else {
      arr3->A[k++] = arr1.A[i++];
    }
  }
  arr3->length = k;
}

int main(){
  struct Array arr1 = {{3, 4, 5, 6, 10}, 10, 5};
  struct Array arr2 = {{2, 4, 5, 7, 12}, 10, 5};

  struct Array arr3;
  arr3.size = 10;

  display(&arr1);
  display(&arr2);

  difference_sorted(arr1, arr2, &arr3);

  display(&arr3);

  return 0;
}
