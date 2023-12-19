#include <stdio.h>

int isMultiple(int first, int second){
  if ( first % second == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int main() {
  int i;
  for (i=1; i<10; i++){
    if (isMultiple(i+2, i) == 1){
      printf("%d is a multiple of %d\n", i, i+2);
    }
    else{
      printf("%d is not a multiple of %d\n", i, i+2);
    }
  }
  return 0;
}