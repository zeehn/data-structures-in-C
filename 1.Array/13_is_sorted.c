#include <stdio.h>
#include <stdbool.h>

// This program checks whether array is sorted (in ascending order) or not.

struct Array {
  int A[8];
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

int is_sorted(struct Array arr){
  int i;
  for(i = 0; i < arr.length - 1; i++){
    if(arr.A[i] > arr.A[i + 1]){
      return -1;
    }
  }
  return 1;
}

int main(){
  struct Array arr = {{2, 14, 6, 8, 10, 12, 14, 16}, 8, 8};

  display(arr);
  
  int res = is_sorted(arr);
  if(res == 1){
    printf("Array is sorted.\n");  
  }
  else {
    printf("Array is not sorted.\n");
  }

  return 0;
}
