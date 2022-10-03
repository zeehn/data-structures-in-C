#include <stdio.h>
#include <stdlib.h>

/* * *
 * This program creates an array of 5 elements in heap by allocating memory dynamically.
 * Populates the array with 3 elements. Asks the user for index & number to insert in the array.
 * Inserts the element at the given index. If array is full, displays a message.
 * Finally, displays the updated state of the array.
 * * */

struct Array {
  int *A;
  int size;
  int length;
};

int main(){
  struct Array arr;
  arr.size = 5;
  arr.A = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;

  // Populate the array with some data
  arr.A[0] = 5; arr.A[1] = 10; arr.A[2] = 15; 
  arr.length = 3;

  // Display current state of the array
  printf("\nCurrently, array has %d elements. Total capacity is %d.\n", arr.length, arr.size);
  printf("Current Elements in the array are: ");
  for(int i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  
  int index, num;
  printf("\n\nTo insert a new element. Give index: ");
  scanf("%d", &index);
  printf("Enter the number to insert: ");
  scanf("%d", &num);

  int i;
  if(arr.size == arr.length){
    printf("\nArray is full.");
  } else {
    for(i = arr.length; i > index; i--){
      arr.A[i] = arr.A[i - 1];
    }
    arr.A[arr.length] = num;
    arr.length++;
  }

  printf("\nCurrently, array has %d elements. Total capacity is %d.\n", arr.length, arr.size);
  printf("Current Elements in the array are: ");
  for(int i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n"); 
  free(arr.A);
  return 0;
}

