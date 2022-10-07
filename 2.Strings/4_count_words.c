#include <stdio.h>

// This program counts the number of words in sentence.

int main(){
  char str[] = "Hello, how are   you   today?";

  int i = 0;
  int count = 0;

  while(str[i] != '\0'){
    if(str[i] == ' ' && str[i - 1] != ' '){
      count++;
    }
    i++;
  }

  printf("Num of words: %d\n", count + 1);
  return 0;
}
