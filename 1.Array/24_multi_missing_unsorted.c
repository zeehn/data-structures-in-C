#include <stdio.h>

// This program finds missing elements in an unsorted array of numbers using hashing technique.
// For this method to work, we need to know the maximum & minimum element in the array to create an array that big to hash 
// missing elements.

struct Array {
  int A[12];
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

void multi_missing_unsorted(struct Array arr){
  int i;
  struct Array arr2 = {{0}, 12, 12};
  
  for(i = 0; i < arr.length; i++){
    arr2.A[arr.A[i]]++;
  }

  printf("Following are missing elements in arr1: ");
  for(i = 0; i < arr2.length; i++){
    if(arr2.A[i] == 0 && i != 0){
      printf("%d ", i);
    }
  }
  printf("\n");
}

int main(){
  struct Array arr = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 12, 10};

  display(arr);

  multi_missing_unsorted(arr);

  return 0;
}
