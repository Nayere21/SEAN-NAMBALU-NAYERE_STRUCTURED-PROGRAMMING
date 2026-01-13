#include <stdio.h>
#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0; // Points to the oldest element
int tail = 0; // Points to the next empty position
int count = 0; // Number of elements currently in buffer

void insert_sample(int value) {
    buffer[tail] = value;
    tail = (tail + 1) % BUFFER_SIZE;
    
    if(count < BUFFER_SIZE) {
        count++;
    } else {
        head = (head + 1) % BUFFER_SIZE;
    }
}

void print_samples() {
    printf("Buffer contents (oldest to newest): ");
    
    if(count == 0) {
        printf("Buffer is empty\n");
        return;
    }
    
    int i = head;
    for(int j = 0; j < count; j++) {
        printf("%d ", buffer[i]);
        i = (i + 1) % BUFFER_SIZE;
    }
    printf("\n");
}

int main() {
    int choice, value;
    
    printf("Circular Data Logger (Buffer Size: %d)\n", BUFFER_SIZE);
    printf("=======================================\n");
    
    do {
        printf("\nMenu:\n");
        printf("1. Insert a sample\n");
        printf("2. Print all samples\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter sensor value: ");
                scanf("%d", &value);
                insert_sample(value);
                printf("Sample %d inserted.\n", value);
                break;
                
            case 2:
                print_samples();
                break;
                
            case 3:
                printf("Exiting...\n");
                break;
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 3);
    
    return 0;
}