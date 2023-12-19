#include <stdio.h>

struct coords {
   	int x;
   	int y;
};

int FindPoint(int x1, int y1, int x2, int y2, int x, int y)
{
    if (x > x1 && x < x2 && y > y1 && y < y2){
        return 1;
    }
    return 0;
}


 
int main()
{
    struct coords b_corn, t_corn, point;
    int cont = 1;
    while(cont == 1){
  	    printf("\nEnter coords of bottom-left corner as \"x, y\": ");
   	    scanf("%d, %d", &b_corn.x, &b_corn.y);
        printf("\nEnter coords of top-right corner as \"x, y\": ");
        scanf("%d, %d", &t_corn.x, &t_corn.y);
        printf("\nEnter coords of point to check as \"x, y\": ");
        scanf("%d, %d", &point.x, &point.y);
        if (FindPoint(b_corn.x, b_corn.y, t_corn.x, t_corn.y, point.x, point.y) == 1){
            printf("Yes, point does lie within the rectangle\n");
        }
        else{
            printf("No, the point does not lie within the rectangle\n");
        }
        printf("\nWould you like to continue? 1=yes 0=no: ");
   	    scanf("%d", &cont);
   	}    
    return 0;
}