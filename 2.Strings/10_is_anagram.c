#include <stdio.h>

// This program takes two strings and checks if they are anagrams. Checks only lowercase strings.

void is_anagram(char *str, char *str2){
  char hash[26];
  int i = 0;
  while(str[i] != '\0'){
    hash[str[i] - 97]++;
    i++;
  }
  i = 0;
  while(str2[i] != '\0'){
    hash[str2[i] - 97] -= 1;
    if(hash[str2[i] - 97] < 0){
      printf("Not an anagram!\n");
      break;
    }
    i++;
  }
  if(str2[i] == '\0')
    printf("Is an anagram!\n");
}

int main(){
  char str1[] = "decimal";
  char str2[] = "medical";

  is_anagram(str1, str2);

  return 0;
}
