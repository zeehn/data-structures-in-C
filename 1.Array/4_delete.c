#include <stdio.h>
#include <stdlib.h>


/*
 * This program creates an array in heap memory of size 5.
 * Ask the user for the index to remove from the array.
 * Displays the elements in the array after removing the given index.
 * * * */


struct Array {
  int *A;
  int size;
  int length;
};

void display(struct Array *arr){
  int i;
  printf("Current state of array: ");
  for(i = 0; i < arr->length; i++){
    printf("%d ", arr->A[i]);
  }
  printf("\n");
}

void delete(struct Array *arr, int index){
  int i;
  if(index < 0 || index > arr->length){
    printf("Invalid index\n");
    return;
  }
  for(i = index; i < arr->length - 1; i++){
    arr->A[i] = arr->A[i + 1];
  }
  arr->length--;
}


int main(){
  struct Array arr;
  arr.size = 5;
  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;

  arr.A[0] = 1; arr.A[1] = 2; arr.A[2] = 3; arr.A[3] = 4; arr.A[4] = 5;
  arr.length = 5;
  
  display(&arr);
  
  int index;
  printf("Enter the index to remove: ");
  scanf("%d", &index);
  
  delete(&arr, index);
  display(&arr);
  free(arr.A);
  return 0; 
}
