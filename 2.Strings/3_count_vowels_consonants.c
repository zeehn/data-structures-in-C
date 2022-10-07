#include <stdio.h>

// This program counts a number of vowels & consonants in a sentence.

int main(){
  char str[] = "How are you?";

  int i = 0;
  int v_count = 0;
  int c_count = 0;
  char c;
  while(str[i] != '\0'){
    c = str[i];
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
      v_count++;
    }
    else if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
      c_count++;
    }
    i++;
  }
  printf("Vowels: %d\nConsonants: %d\n", v_count, c_count);

  return 0;
}
