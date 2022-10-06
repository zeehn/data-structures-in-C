#include <stdio.h>

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

void min_max(struct Array arr){
  int i;
  int min = arr.A[0];
  int max = arr.A[0];

  for(i = 0; i < arr.length; i++){
    if(arr.A[i] > max)
      max = arr.A[i];
    if(arr.A[i] < min)
      min = arr.A[i];
  }
  printf("Min: %d, Max: %d\n", min, max);
}

int main(){
  struct Array arr = {{5, 8, 3, 9, 6, 2, 10, 7, -1, 4}, 10, 10};

  display(arr);

  min_max(arr);

  return 0;
}
