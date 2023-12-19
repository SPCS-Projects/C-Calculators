#include <stdio.h>
int main()
{
  int x, y, sum, product, difference, quotient, remainder;


  printf( "Please enter two numbers:\n" );
  scanf( "%d%d", &x, &y );


  sum = x + y;
  printf( "%d + %d = %d\n", x, y, sum );


  product = x * y;
  printf("%d * %d = %d\n", x, y, product );


  difference = x - y;
  printf("%d - %d = %d\n", x, y, difference );


  quotient = x / y;
  printf("%d / %d = %d\n", x, y, quotient );


  remainder = x % y;
  printf( "The remainder of %d / %d is %d\n", x, y, remainder);


  return 0;
}