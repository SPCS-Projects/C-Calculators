#include <stdio.h>

int main() {
	int sales_people;
	printf("Please enter amount of sales people:\n");
	scanf("%d", &sales_people);
	int weeklyAmount[sales_people], rangeSalary[8], userInput;
	float percentage;
	for (int i = 0; i < 9; i++)
	{
		rangeSalary[i] = 0;
	}
	percentage = .09;

	printf("Please enter the gross amount each sales person earned this week.\n");

	for (int i = 0; i < sales_people; i++)
	{
		printf("Enter amount here.\n$");
		scanf("%d", &userInput);

		weeklyAmount[i] = (userInput * percentage) + 200;

		printf("Net income is $%d\n", weeklyAmount[i]);

	}

	for (int i = 0; i < sales_people; i++)
	{
		if ((weeklyAmount[i] >= 200) && (weeklyAmount[i]< 300))
		{
			rangeSalary[0]++;
		}
		else if ((weeklyAmount[i]>= 300) && (weeklyAmount[i]< 400))
		{
			rangeSalary[1]++;
		}
		else if ((weeklyAmount[i]>= 400) && (weeklyAmount[i]< 500))
		{
			rangeSalary[2]++;
		}
		else if ((weeklyAmount[i]>= 500) && (weeklyAmount[i]< 600))
		{
			rangeSalary[3]++;
		}
		else if ((weeklyAmount[i]>= 600) && (weeklyAmount[i]< 700))
		{
			rangeSalary[4]++;
		}
		else if ((weeklyAmount[i]>= 700) && (weeklyAmount[i]< 800))
		{
			rangeSalary[5]++;
		}
		else if ((weeklyAmount[i]>= 800) && (weeklyAmount[i]< 900))
		{
			rangeSalary[6]++;
		}
		else if ((weeklyAmount[i]>= 900) && (weeklyAmount[i]< 1000))
		{
			rangeSalary[7]++;
		}
		else if ((weeklyAmount[i]>= 1000))
		{
			rangeSalary[8]++;
		}
	}
	printf("$200-299: %d\n", rangeSalary[0]);
	printf("$300-399: %d\n", rangeSalary[1]);
	printf("$400-499: %d\n", rangeSalary[2]);
	printf("$500-599: %d\n", rangeSalary[3]);
	printf("$600-699: %d\n", rangeSalary[4]);
	printf("$700-799: %d\n", rangeSalary[5]);
	printf("$800-899: %d\n", rangeSalary[6]);
	printf("$900-999: %d\n", rangeSalary[7]);
	printf("$1000 and over: %d\n", rangeSalary[8]);

	return 0;
}