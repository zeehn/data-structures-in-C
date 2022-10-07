#include <stdio.h>

// This program reverses a given string in-place. 

void reverse_string(char *str){
  int i = 0, j = 0;
  while(str[j] != '\0')
    j++;
  j -= 1;
  char temp;
  while(i < j){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

int main(){
  char str[] = "Hello, World";
  printf("%s\n", str);
  reverse_string(str);
  printf("%s\n", str);
  return 0;
}
