#include <stdio.h>

/* Topic: If/Else Selection, Assignments, and Increment/Decrement Operators
   Focuses on shorthand mutations of data and clean selection branching.
*/

int main() {
    int system_load = 75;
    int base_threads = 10;

    printf("--- 1. Selection Structures ---\n");
    // Double selection (if-else)
    if (system_load > 80) {
        printf("Warning: High system load detected.\n");
    } else {
        printf("System load is within safe parameters (%d%%).\n", system_load);
    }

    printf("\n--- 2. Assignment and Mutations ---\n");
    // Shorthand assignment operators
    base_threads += 5; // Equivalent to: base_threads = base_threads + 5;
    printf("Updated Base Threads (+= 5): %d\n", base_threads);

    // Post-increment vs Pre-increment differences
    int x = 5, y = 5;
    
    printf("\n--- 3. Increment / Decrement Differences ---\n");
    printf("Value of x++ (Post-increment, used then changed): %d\n", x++); 
    printf("Actual value of x now: %d\n", x);
    
    printf("Value of ++y (Pre-increment, changed then used): %d\n", ++y);

    return 0;
}
