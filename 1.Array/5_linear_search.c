#include <stdio.h>

// This program searches an array in a linear fashion and returns the index if the element is found.

struct Array {
  int A[7];
  int size;
  int length; 
};

void display(struct Array arr){
  int i;
  printf("Elements in the array are: ");
  for(i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
}

int search(struct Array arr, int element){
  int i;
  for(i = 0; i < arr.length; i++){
    if(arr.A[i] == element){
      return i;
    }
  }
  return -1;
}


int main(){
  struct Array arr = {{5, 9, 15, 11, 14, 64, 71}, 7, 7};

  display(arr);

  int element;
  printf("Enter the element to find: ");
  scanf("%d", &element);

  int result = search(arr, element);
  if (result == -1){
    printf("Given element is not in the list.\n");
  } 
  else {
    printf("The index of the given element is %d.\n", result);
  }
  
  return 0;
}
