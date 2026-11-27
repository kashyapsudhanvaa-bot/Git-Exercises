#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int readings[5] = {23, 25, 22, 30, 28};
    int i;

    bubbleSort(readings, 5);

    printf("Sorted readings: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", readings[i]);
    }
    printf("\n");

    return 0;
}

