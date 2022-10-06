#include <stdio.h>

// This program finds the duplicates in a sorted array & prints it to the screen.

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

void duplicates_sorted(struct Array arr){
  int i, last_duplicate = 0;
  for(i = 0; i < arr.length - 1; i++){
    if(arr.A[i] == arr.A[i + 1] && last_duplicate != arr.A[i]){
      printf("%d ", arr.A[i]);
      last_duplicate = arr.A[i];
    }
  }
  printf("\n");
}

int main(){
  struct Array arr = {{3, 6, 8, 8, 10, 12, 15, 15, 15, 20}, 12, 10};

  display(arr);
  duplicates_sorted(arr);

  return 0;
}
