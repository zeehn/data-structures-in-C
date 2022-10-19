#include <stdio.h>

// This program stores a diagonal matrix in a one dimensional array, hence making it space efficient.

void setDiagonal(int arr[], int i, int j, int el){
  if(i == j){
    arr[i - 1] = el;
  }
}

void getDiagonal(int arr[], int i, int j){
  if(i == j){
    printf("%d\n", arr[i - 1]);
  }
  else {
    printf("%d\n", 0);
  }
}

void displayMatrix(int arr[], int size){
  int i, j;
  for(i = 0; i < size; i++){
    for(j = 0; j < size; j++){
      if(i == j){
        printf("%d ", arr[i]);
      }
      else {
        printf("0 ");
      }
    }
    printf("\n");
  }
}

int main(){
  int arr[5]; 
  setDiagonal(arr, 1, 1, 10);
  setDiagonal(arr, 2, 2, 15);
  setDiagonal(arr, 3, 3, 20);
  setDiagonal(arr, 4, 4, 25);
  setDiagonal(arr, 5, 5, 30);

  displayMatrix(arr, 5);

  return 0;
}
