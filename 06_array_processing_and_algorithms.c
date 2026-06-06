#include <stdio.h>

/* Topic: Passing Arrays to Functions, Sorting, and Searching Algorithms
   Demonstrates fundamental data processing tasks over structured collections.
*/

// Function Prototypes passing array references
void execute_bubble_sort(int arr[], int size);
int execute_linear_search(int arr[], int size, int target);

int main() {
    int dataset[5] = {64, 34, 25, 12, 22};
    int size = 5;

    printf("--- 1. Original Dataset Collection ---\n");
    for(int i = 0; i < size; i++) printf("%d ", dataset[i]);
    printf("\n");

    // Passing array to the sorting function
    execute_bubble_sort(dataset, size);

    printf("\n--- 2. Dataset Post-Bubble Sort ---\n");
    for(int i = 0; i < size; i++) printf("%d ", dataset[i]);
    printf("\n");

    printf("\n--- 3. Linear Search Operation ---\n");
    int look_for = 25;
    int search_index = execute_linear_search(dataset, size, look_for);
    
    if(search_index != -1) {
        printf("Target element (%d) verified at sorted array index position [%d].\n", look_for, search_index);
    } else {
        printf("Target element not found in current structure.\n");
    }

    return 0;
}

// Bubble Sort algorithm implementation
void execute_bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swapping values
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Linear Search algorithm implementation
int execute_linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return current index location if target is matched
        }
    }
    return -1; // Return error state if target is missing
}
