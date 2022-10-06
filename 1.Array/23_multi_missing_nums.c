#include <stdio.h>

// This program finds multiple missing elements in a sequence of elements in an array.

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

int multi_missing_nums(struct Array arr){
  int i;
  int diff = arr.A[0];
  for(i = 0; i < arr.length; i++){
    if(arr.A[i] - i != diff){
      while(diff < arr.A[i] - i){
        printf("%d ", i + diff);
        diff++;
      }
    }
  }
  printf("\n");
}

int main(){
  struct Array arr = {{6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19}, 12, 11};

  display(arr);

  multi_missing_nums(arr);

  return 0;
}

