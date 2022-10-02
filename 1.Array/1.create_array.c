/*
 * This program creates a dynamic integer array using struct. 
 * Array struct contains three properties:
 * 1) int *A:	A pointer that points to dynamic memory allocated in heap for the array.
 * 2) int size: Represents total capacity of elements this array can hold.
 * 3) int length: Represents filled capacity.
 * */

# include <stdio.h>
# include <stdlib.h>

struct Array {
    int *A;
    int size;
    int length;
};


int main(){
    struct Array arr;
    printf("Enter size of the array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    int i;
    for(int i = 0; i < arr.size; i++){
    	printf("Enter a number to add at arr[%d]: ", i);
	scanf("%d", &arr.A[i]);
    }

    for(int i = 0; i < arr.size; i++){
        printf("%d ", arr.A[i]);
    }
    printf("\n");
    free(arr.A);
    return 0;  
}

