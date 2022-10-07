#include <stdio.h>

int main(){
  char str[] = "Hello, World!";
  int count = 0;

  while(str[count] != '\0'){
    count++;
  }
  printf("%d\n", count);
}
