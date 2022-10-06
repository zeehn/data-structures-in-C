#include <stdio.h>

// This program finds a pair of elements with sum k in an unsorted array through hashing.

struct Array {
  int A[16];
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

void pair_sum(struct Array arr, int sum){
  int i, diff;
  struct Array arr2 = {{0}, 16, 16};
  for(i = 0; i < arr.length; i++){
    diff = sum - arr.A[i];
    if(arr2.A[diff] == 1){
      printf("Pair with sum %d = %d %d.\n", sum, arr.A[i], diff);
    }
    else {
      arr2.A[arr.A[i]] = 1;
    }
  }
}

int main(){
  struct Array arr = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 10, 10};

  display(arr);

  pair_sum(arr, 10);

  return 0;
}
