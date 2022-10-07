#include <stdio.h>

// This program checks if a given string is a palindrome.

void is_palindrome(char *str){
  int i = 0, j = 0;
  while(str[j] != '\0')
    j++;
  char str2[j];
  j = j - 1;
  while(j >= 0){
    str2[i] = str[j];
    j--;
    i++;
  }
  i = 0;
  while(str[i] != '\0' && str2[i] != '\0'){
    if(str[i] != str2[i]){
      break;
    }
    i++;
  }
  if(str[i] == '\0' && str2[i] == '\0'){
    printf("%s is a palindrome.\n", str);
  }
  else {
    printf("%s is not a palindrome.\n", str);
  }
}

int main(){
  char str[] = "madam";

  is_palindrome(str);

  return 0;
}
