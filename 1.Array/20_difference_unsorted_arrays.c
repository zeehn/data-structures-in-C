#include <stdio.h>

// This program finds a difference between two unsorted arrays (A - B) and stores it in a third array.

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

void difference_unsorted(struct Array arr1, struct Array arr2, struct Array *arr3){
  int i, j, k = 0, flag;
  for(i = 0; i < arr1.length; i++){
    flag = 0;
    for(j = 0; j < arr2.length; j++){
      if(arr1.A[i] == arr2.A[j]){
        flag = 1;
      }
    }
    if(flag == 0){
      arr3->A[k++] = arr1.A[i];
    }
  }
  arr3->length = k;
}

int main(){
  struct Array arr1 = {{3, 5, 10, 4, 6}, 10, 5};
  struct Array arr2 = {{12, 4, 7, 2, 5}, 10, 5};
  struct Array arr3;
  arr3.size = 10;

  display(&arr1);
  display(&arr2);

  difference_unsorted(arr1, arr2, &arr3);

  display(&arr3);

  return 0;
}
