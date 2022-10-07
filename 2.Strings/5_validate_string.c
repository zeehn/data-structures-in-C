#include <stdio.h>

int validate_string(char *str){
  int i = 0;
  char c;
  while(str[i] != '\0'){
    c = str[i];
    if(!(c >= 65 && c <= 90) && !(c >= 97 && c <= 122) && !(c >= 48 && c <= 57)){
      return -1;
    }
    i++;
  }
  return 1;
}

int main(){
  char str[] = "hello122";

  int result = validate_string(str);
  if(result == 1){
    printf("String is valid.\n");
  }
  else {
    printf("String is not valid.\n");
  }
  return 0;
}
