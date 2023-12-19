#include <stdio.h>

int isPerfect(int number)
{
	int i,sumOfDivisors = 1;
	for (i = 2; i <= number / 2; i++) 
	{
		if ((number % i) == 0)
			sumOfDivisors += i;
	}
  if(sumOfDivisors == number){
    return 1;
  }
  else{
    return 0;
  }
}

int main()
{
	for (int number = 1; number <= 1000; number++)
	{
		if (isPerfect(number)==1)
		{
			printf("%d = 1", number);
			for (int i = 2; i <= number / 2; i++) 
			{
				if ((number % i) == 0)
					printf(" + %d",i);
			}
      printf("\n");
		} 
	}
}