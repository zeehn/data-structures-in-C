#include <stdio.h>

// This program finds duplicates in an unsorted array, prints the number & number of times it appeared in the array.

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

void count_dups_unsorted(struct Array arr){
  int i, j, count;
  for(i = 0; i < arr.length; i++){
    count = 1;
    if(arr.A[i] != -1){
      for(j = i + 1; j < arr.length; j++){
        if(arr.A[i] == arr.A[j]){
          count++;
          arr.A[j] = -1;
        }
      }
      if(count > 1)
        printf("Number %d: appeared %d times.\n", arr.A[i], count);
    }
  }
}

int main(){
  struct Array arr = {{8, 3, 6, 4, 6, 5, 6, 8, 2, 7}, 12, 10};

  display(arr);

  count_dups_unsorted(arr);

  return 0;
}
