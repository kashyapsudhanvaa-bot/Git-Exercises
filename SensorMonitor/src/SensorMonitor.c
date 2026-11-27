#include <stdio.h>

int main() {
    int readings[] = {23, 25, 22, 30, 28};
    int i, threshold = 27;

    for (i = 0; i < 5; i++) {
        printf("Reading %d: %d\n", i, readings[i]);
    }

    for (i = 0; i < 5; i++) {
        if (readings[i] > threshold) {
            printf("Alert: Reading %d (%d) exceeds threshold %d\n", i, readings[i], threshold);
        }
    }

    return 0;
}
