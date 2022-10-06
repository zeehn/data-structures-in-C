#include <stdio.h>

// This program finds the pairs of sum k in a sorted array.

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

void sum_pair_sorted(struct Array arr, int sum){
  int i = 0;
  int j = arr.length - 1;
  int pair_sum = 0;
  while(i < j){
    pair_sum = arr.A[i] + arr.A[j];
    if(pair_sum == sum){
      printf("Pair of sum %d are: %d %d\n", sum, arr.A[i], arr.A[j]);
      i++;
      j--;
    }
    else if(pair_sum > sum){
      j--;
    }
    else{
      i++;
    }
  }
}

int main(){
  struct Array arr = {{1, 3, 4, 5, 6, 8, 9, 10, 12, 14}, 10, 10};

  display(arr);
  sum_pair_sorted(arr, 10);

  return 0;
}
