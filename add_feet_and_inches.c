#include <stdio.h>

struct Distance {
   	int feet;
   	float inch;
};

int main() {
	struct Distance dist_1, dist_2, result;
	printf("Enter 1st distance\n");
  	printf("Enter feet: ");
   	scanf("%d", &dist_1.feet);
   	printf("Enter inch: ");
   	scanf("%f", &dist_1.inch);
 
   	printf("\nEnter 2nd distance\n");
   	printf("Enter feet: ");
   	scanf("%d", &dist_2.feet);
   	printf("Enter inch: ");
   	scanf("%f", &dist_2.inch);
   
   	result.feet = dist_1.feet + dist_2.feet;
   	result.inch = dist_1.inch + dist_2.inch;

   	while (result.inch >= 12.0) {
      	result.inch = result.inch - 12.0;
      	result.feet += 1;
   	}
   	printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   	return 0;
}