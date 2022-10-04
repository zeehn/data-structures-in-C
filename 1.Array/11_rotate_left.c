#include <stdio.h>

// This program rotates an array leftwards times number. Times is a variable if 2 is given to times variable
// the array will be rotated left 2 times.

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

void rotate_left(struct Array *arr, int times){
  int i, j;
  for(i = 0; i < times; i++){
    int temp = arr->A[0];
    j = 0;
    while(j < arr->length){
      arr->A[j] = arr->A[j + 1];
      j++;
    }
    arr->A[arr->length - 1] = temp;
  }
}

int main(){
  struct Array arr = {{15, 11, 18, 19, 2, 56, 44, 91, 8, 10}, 10, 10};

  display(arr);
  int times = 3;
  rotate_left(&arr, times);
  display(arr);

  return 0;
}
