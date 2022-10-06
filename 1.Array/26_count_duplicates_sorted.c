#include <stdio.h>

// This programs counts what number appeared how many times in a sorted array and prints the number and number of times it appeared to the screen.

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

void count_duplicates_sorted(struct Array arr){
  int i, j;
  for(i = 0; i < arr.length - 1; i++){
    if(arr.A[i] == arr.A[i + 1]){
      j = i;
      while(arr.A[j] == arr.A[i]){
        j++;
      }
      printf("Number %d: appeared %d times.\n", arr.A[i], j - i);
      i = j;
    }
  }
}

int main(){
  struct Array arr = {{3, 6, 8, 8, 10, 12, 15, 15, 15, 20}, 12, 10};

  display(arr);

  count_duplicates_sorted(arr);

  return 0;
}
