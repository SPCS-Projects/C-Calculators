#include <stdio.h>

int main() {
    float gallons, miles, mpg, average;
    int incr = 0;
    while(1){
        printf( "Enter the gallons used (-1 to end): " );
        scanf( "%f", &gallons );
        if (gallons == -1){
            printf( "\nThe overall average miles/gallon was %f", (average / incr) );
            return 0;
        }

        printf( "Enter the miles driven: " );
        scanf( "%f", &miles );

        mpg = miles / gallons;
        average += mpg;
        incr += 1;

        printf( "The miles/gallon for this tank was %f\n\n", mpg );
    }
  return 0;
}