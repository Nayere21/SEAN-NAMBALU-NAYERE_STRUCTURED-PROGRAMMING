#include <stdio.h>

int main() {
    int n, num;

    printf("How many numbers? ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Enter a positive number!\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);

    // Read first number
    scanf("%d", &num);
    int min = num;
    int max = num;

    // Read remaining numbers
    for(int i = 1; i < n; i++) {
        scanf("%d", &num);
        if(num < min) min = num;
        if(num > max) max = num;
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
