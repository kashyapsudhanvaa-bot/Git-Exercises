#include <stdio.h>

int main(void) {
    int readings[5] = {23, 25, 22, 30, 28};
    int i,sum=0,max=0;

    for (i = 0; i < 5; i++) {
        printf("Reading %d: %d\n", i, readings[i]);
        sum+=readings[i];
        if(readings[i]>max){
        	max=readings[i];
        }
    }
    printf("Average is %.1f\n",sum/5.0);
    printf("Max is %d\n",max);

    return 0;
}

