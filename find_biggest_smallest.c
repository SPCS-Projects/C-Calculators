#include <stdio.h>
int main() {
  int x, y, z, sum, average, product;
  printf("Enter three different integers:\n");
  scanf("%d%d%d", &x, &y, &z);
  sum = x + y + z;
  printf("Sum is %d\n", sum);
  average = (x + y + z) / 3;
  printf("Average is %d\n", average);
  product = x*y*z;
  printf("Product is %d\n", product);
  if ( x < y ) {
    if( x < z){
      printf("Smallest is \n", x);
    }
  }
  if ( y < x ) {
    if( y < z){
      printf("Smallest is \n", y);
    }
  }
  if ( z < x ) {
    if( z < y){
      printf("Smallest is \n", z);
    }
  }



  if ( x > y ) {
    if( x > z){
      printf("Largest is \n", x);
    }
  }
  if ( y > x ) {
    if( y > z){
      printf("Largest is \n", y);
    }
  }
  if ( z > x ) {
    if( z > y){
      printf("Largest is \n", z);
    }
  }
  return 0;
}

