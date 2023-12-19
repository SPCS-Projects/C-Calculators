#include <stdio.h>

int createSquare(int side){
  int a,b;
  for(a=0; a<side; a++){
    for(b=0; b<side; b++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

int main() {
  createSquare(5);
  return 0;
}