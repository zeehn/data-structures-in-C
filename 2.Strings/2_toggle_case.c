#include <stdio.h>

// This program toggles the case of characters in a string. If character is in smaller case, it upcases it and vice versa.

int main(){
  char str[] = "hELLO, wORLD!";
  int i = 0;

  while(str[i] != '\0'){
    if(str[i] >= 65 && str[i] <= 90){
      str[i] += 32;
    }
    else if(str[i] >= 97 && str[i] <= 122){
      str[i] -= 32;
    }
    i++;
  }

  printf("%s\n", str);
  return 0;
}
