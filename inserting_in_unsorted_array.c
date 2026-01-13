#include <stdio.h>

int main() {
    int n, value, position;
    
    printf("Input the size of array: ");
    scanf("%d", &n);
    
    int arr[n+1]; // One extra space for the new element
    
    printf("Input %d elements in the array:\n", n);
    for(int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe current list of the array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nInput the value to be inserted: ");
    scanf("%d", &value);
    
    printf("Input the Position, where the value to be inserted (0-indexed): ");
    scanf("%d", &position);
    
    // Shift elements to the right from the specified position
    for(int i = n; i > position; i--) {
        arr[i] = arr[i-1];
    }
    
    // Insert the new value at the specified position
    arr[position] = value;
    
    printf("\nAfter Insert the element the new list is: ");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}