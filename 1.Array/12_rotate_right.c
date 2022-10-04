#include <stdio.h>

// This program rotates an array variable times number of times right wards. 

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

void rotate_right(struct Array *arr, int times){
  int i, j, temp;
  for(i = 0; i < times; i++){
    temp = arr->A[arr->length - 1];
    j = arr->length - 1;
      while(j > 0){
      arr->A[j] = arr->A[j - 1];
      j--;
    }
    arr->A[0] = temp;
  }
}

int main(){
  struct Array arr = {{2, 4, 8, 11, 15, 21, 90, 18, 14, 10}, 10, 10};
  
  display(arr);
  int times = 3;
  rotate_right(&arr, times);
  display(arr);

  return 0;
}
