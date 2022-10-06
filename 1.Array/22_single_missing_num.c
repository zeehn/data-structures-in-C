#include <stdio.h>

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

int single_missing_num(struct Array arr){
  int i, sum = 0;
  for(i = 0; i < arr.length; i++){
    sum += arr.A[i];
  }
  i++;
  return (i * (i + 1) / 2 - sum);
}

int main(){
  struct Array arr = {{1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12}, 12, 11};

  display(arr);

  int result = single_missing_num(arr);

  printf("The missing number is: %d.\n", result);

  return 0;
}
