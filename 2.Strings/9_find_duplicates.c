#include <stdio.h>


// this method takes n^2 time.
void find_duplicates(char *str){
  int i = 0;
  int j;
  while(str[i + 1] != '\0'){
    j = i + 1;
    while(str[j] != '\0'){
      if(str[i] == str[j]){
        printf("%c ", str[i]);
      }
      j++;
    }
    i++;
  }
  printf("\n");
}

// Method-2:
// This method takes n time. For this method we need a huge array, to reduce array we need the lowest element & largest element. 
// In our case, we are taking a string of small letters. Small letters ASCI code starts from 97 to 122, which is 26

void find_duplicates_2(char *str){
  char hash[26] = {0};
  int i = 0;
  while(str[i] != '\0'){
    hash[str[i] - 97]++;
    i++;
  }
  i = 0;
  while(i < 26){
    if(hash[i] > 1){
      printf("%c appeared %d times in the given string.\n", i + 97, hash[i]);
    }
    i++;
  }
  printf("\n");
}


int main(){
  char str[] = "finding";

  find_duplicates_2(str);

  return 0;
}
