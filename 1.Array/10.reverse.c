#include <stdio.h>

// This program reverses a given array of numbers in O(n) time.
struct Array {
  int A[10];
  int size;
  int length;
};

void display(struct Array arr){
  int i;
  for(i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
}

void reverse(struct Array *arr){
  int i, j;
  for(i = 0, j = arr->length - 1; i < j; i++, j--){
    int temp = arr->A[i];
    arr->A[i] = arr->A[j];
    arr->A[j] = temp;
  }
}

int main(){
  struct Array arr = {{11, 15, 21, 8, 19, 65, 21, 4, 14, 21}, 10, 10};

  display(arr);
  reverse(&arr);
  display(arr);

  return 0;
}
