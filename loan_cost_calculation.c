#include<stdio.h>

int main()
{
    int days;
    float rate, principal, interest;

    while (1){
      printf("Enter loan principal (-1 to end): \n");
      scanf("%f", &principal);
      if ( principal == -1 ){
        return 0;
      }

      printf("Enter interest rate: \n");
      scanf("%f", &rate);

      printf("Enter term of the loan in days: \n");
      scanf("%d", &days);

      interest = principal * rate * days / 365;
      printf("The interest charge is $%.2f\n", interest);
    }
    return 0;
}