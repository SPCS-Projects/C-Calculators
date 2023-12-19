#include <stdio.h>

int main() {
  int weight, height, w, h, BMI;

  printf( "Enter your weight in pounds: \n" );
  scanf( "%d", &weight );

  printf( "Enter your height in inches: \n" );
  scanf( "%d", &height );

  w = weight * 703;
  h = height * height;

  BMI = w / h;

  printf( "Your BMI is: %d\n", BMI );

  printf( "BMI VALUES\n" );
  printf( "Underweight: less than 18.5\n" );
  printf( "Normal:      between 18.5 and 24.9\n" );
  printf( "Overweight:  between 25 and 29.9\n" );
  printf( "Obese:       30 or greater\n" );

  return 0;
}