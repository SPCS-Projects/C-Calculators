#include <stdio.h>
#include <stdlib.h>

struct return_vals {
    int found, number;
};
 
typedef struct return_vals Struct;

Struct check_availability(int class[5]){
	Struct ret;
	ret.found = 0;
	for (int i = 1; i < 6; i++)
	{
		if (class[i] == 0 && ret.found != 1){
			class[i] = 1;
			ret.found = 1;
			ret.number = i;
		}

	}
	return ret;
}

int main() {
	Struct ret;
	int first_class[5];
	for (int i = 1; i < 6; i++)
	{
		first_class[i] = 0;
	}
	int economy[5];
	for (int i = 1; i < 6; i++)
	{
		economy[i] = 0;
	}
	int cont = 1;
	int seating_type;
	int swap = 0;
	int cancel = 0;
	while(cont == 1){
	printf("Please type 1 for 'first class'\nPlease type 2 for 'economy'\n");
	scanf("%d", &seating_type);
	ret.found = 0;
	if (seating_type == 1){
		ret = check_availability(first_class);
		if (ret.found != 1){
			printf("First class is fully booked, enter 1 if economy is acceptable else enter 0: ");
			scanf("%d", &swap);
			if (swap == 0){
				cancel = 1;
				cont = 0;
			}
			else{
				seating_type = 2;
				ret = check_availability(economy);
				if (ret.found != 1){
					printf("The plane is fully booked, next flight leaves in 3 hours");
					cont = 0;
					cancel = 2;
				}
			}

		}
	}
	else if (seating_type == 2){
		printf("test");
		ret = check_availability(economy);
		if (ret.found != 1){
			printf("Economy is fully booked, enter 1 if first class is acceptable else enter 0: ");
			scanf("%d", &swap);
			if (swap == 0){
				cancel = 1;
			}
			else{
				ret = check_availability(first_class);
				seating_type = 1;
				if (ret.found != 1){
					printf("The plane is fully booked, next flight leaves in 3 hours");
					cont = 0;
					cancel = 2;
				}
			}
		}
	}
	if (cancel == 0){
		if (ret.found == 1){
			if (seating_type == 1){
				printf("You've been registered to the first class seat #%d\n",ret.number);
			}
			else if (seating_type == 2){
				printf("You've been registered to the economy class seat #%d\n",ret.number);
			}
		}
	}
	else if (cancel == 1){
		printf("Next flight leaves in 3 hours.");
	}
	else if (cancel == 2){
		return 0;
	}
	}
	return 0;
}