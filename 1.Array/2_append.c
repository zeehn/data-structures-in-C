#include <stdio.h>
#include <stdlib.h>

/* * *
 * This program creates a dynamic array by taking array size as input from the user.
 * Fills the array with elements by taking input from the user.
 * Finally, takes another number as input from the user to append to the existing array.
 * If array is full, displays a message. Adds the given element to the end of the array otherwise.
 * Finally displays the elements of the array.
 * * */

struct Array {
  int *A;
  int size;
  int length;
};


int main(){
  struct Array arr;
  printf("Enter the total size of the array: ");
  scanf("%d", &arr.size);
  arr.length = 0;

  arr.A = (int *)malloc(arr.size * sizeof(int));
  
  int num;
  printf("Enter the number of elements you want to add: ");
  scanf("%d", &num);

  int i;
  for(i = 0; i < num; i++){
    printf("Enter the element at arr[%d]: ", i);
    scanf("%d", &arr.A[i]);
    arr.length++;
  }

  printf("Current Elements in the array: ");
  for(i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }

  printf("\nEnter a number to append to the array: ");
  int n;
  scanf("%d", &n);
  if(arr.size == arr.length){
    printf("Array is full.");
  } else {
    arr.A[arr.length] = n;
    arr.length++;
  }

  printf("\nCurrent Elements in the array: ");
  for(i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
  free(arr.A);

  return 0;
}

