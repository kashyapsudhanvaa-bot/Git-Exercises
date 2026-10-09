#include <stdio.h>

int countAbove(int arr[], int n, int limit) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > limit) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int readings[] = {23, 25, 22, 30, 28};

    printf("%d\n", countAbove(readings, 5, 24));

    return 0;
}
