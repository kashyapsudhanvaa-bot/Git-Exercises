#include <stdio.h>

int main(void) {
    int readings[5] = {23, 25, 22, 30, 28};
    int i,sum=0;

    for (i = 0; i < 5; i++) {
        printf("Reading %d: %d\n", i, readings[i]);
        sum+=readings[i];
    }
    printf("Average is %.1f\n",sum/5.0);

    return 0;
}

