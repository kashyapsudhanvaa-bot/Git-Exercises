#include <stdio.h>

void checkThreshold(int value, int limit) {
    if (value > limit) {
        printf("Alert: %d exceeds %d\n", value, limit);
    }
}


// TODO experimental: try alternate threshold logic
