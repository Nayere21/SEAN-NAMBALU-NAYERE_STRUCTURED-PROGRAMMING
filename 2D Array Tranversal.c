#include <stdio.h>

int main() {
    int arr[6][4];
    int i, j;

    printf("Enter elements of 6x4 array:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Array elements are:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}