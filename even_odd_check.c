#include <stdio.h>

int isEven(int test){
  if ( test % 2 == 0){
    return 1;
  }
  else{
    return 0;
  }
}

int main() {
  int i;
  for (i=1; i<10; i++){
    if (isEven(i) == 1){
      printf("%d is an even number\n", i);
    }
    else{
      printf("%d is not an even number\n", i);
    }
  }
  return 0;
}