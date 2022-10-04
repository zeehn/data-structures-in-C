#include <stdio.h>

// This program searches an array for the given number using binary search algorith.
// Returns index of the number found, returns -1 otherwise.

struct Array {
  int A[10];
  int size;
  int length;
};

void display(struct Array arr){
  int i;
  printf("\nCurrent state of the array: ");
  for(i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
}

int binary_search(struct Array arr, int element){
  int lo = 0;
  int hi = arr.length - 1;
  int mid, mid_num;
  while(lo <= hi){
    mid = (lo + hi) / 2;
    mid_num = arr.A[mid];
    if (element == mid_num) {
      return mid;
    }
    else if (element < mid_num) {
      hi = mid - 1;
    }
    else {
      lo = mid + 1;
    }
  }
  return -1;
}

int main(){
  struct Array arr = {{5, 9, 11, 17, 35, 39, 66, 75, 85, 99}, 10, 10};

  display(arr);

  int element;
  printf("Enter the number you want to search: ");
  scanf("%d", &element);

  int result = binary_search(arr, element);
  if(result == -1){
    printf("Given element not found in the array.\n");
  }
  else {
    printf("Given element %d found at index %d.\n", element, result);
  }
  
  return 0;
}

