#include <stdio.h>

/* Topic: Implementation of Pointers & Memory Address Mapping
   Demonstrates tracking, reading, and altering actual raw memory allocations.
*/

int main() {
    int baseline_metric = 250;
    int *memory_ptr; // Declaring a pointer targeting an integer data type

    memory_ptr = &baseline_metric; // Assigning the memory address of our variable to the pointer

    printf("--- 1. Memory Address Evaluation ---\n");
    printf("Value of baseline_metric: %d\n", baseline_metric);
    printf("Memory address of baseline_metric (&baseline_metric): %p\n", (void*)&baseline_metric);
    printf("Address stored inside memory_ptr pointer: %p\n", (void*)memory_ptr);

    printf("\n--- 2. Indirection & Dereferencing Operations ---\n");
    // Using the dereference operator (*) to read data directly out of the address
    printf("Value pulled via dereferencing (*memory_ptr): %d\n", *memory_ptr);

    // Mutating memory contents directly via the pointer reference
    *memory_ptr = 500; 
    printf("Updated value of baseline_metric after pointer mutation: %d\n", baseline_metric);

    return 0;
}
