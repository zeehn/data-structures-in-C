#include <stdio.h>

// This program compares two strings, checks if they are the same, if not, which string is greater.

void compare_strings(char *str1, char *str2){
  int i = 0;

  while(str1[i] != '\0' && str2[i] != '\0'){
    if(str1[i] != str2[i])
      break;
    i++;
  }
  if(str1[i] > str2[i])
    printf("%s is greater than %s.\n", str1, str2);
  else if(str2[i] > str1[i])
    printf("%s is greater than %s.\n", str2, str1);
  else 
    printf("Strings are equal!\n");
}

int main(){
  char str1[] = "Painting";
  char str2[] = "Painting";

  compare_strings(str1, str2);

  char str3[] = "Painter";

  compare_strings(str1, str3);

  return 0;
}
