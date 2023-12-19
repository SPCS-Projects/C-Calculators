#include <stdio.h>

int main(){  
    int i, yards[36];
    float mileages[35];

    for (i = 1; i < 36; i++){
        yards[i-1] = 50*i;
    }
    yards[35] = 1760;
    i=0;
    for (i=0; i< 36; i++){
        mileages[i] = yards[i]/1760.0;
    }

    for (i=0; i<36; i++){
        printf("%d\tyards = %f mile\n", yards[i], mileages[i]);
    }
    return 0;
}