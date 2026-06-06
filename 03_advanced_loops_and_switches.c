#include <stdio.h>

/* Topic: Advanced Iteration (do-while), Multi-selection (switch), Break, and Continue
   Demonstrates precision flow control in execution blocks.
*/

int main() {
    // 1. Switch Case Structure
    int structural_choice = 2;

    printf("--- 1. Multi-Selection Structure (Switch) ---\n");
    switch(structural_choice) {
        case 1:
            printf("Executing Data Module 1.\n");
            break; // Prevents fall-through to next case
        case 2:
            printf("Executing Structural Module 2.\n");
            break;
        case 3:
            printf("Executing System Module 3.\n");
            break;
        default:
            printf("Invalid selection initiated.\n");
    }

    // 2. Loop Controls: Break and Continue
    printf("\n--- 2. Loop Alteration (Break & Continue) ---\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 2) {
            printf("Skipping iteration 2 via 'continue'\n");
            continue; // Skips the rest of this loop cycle
        }
        if (i == 5) {
            printf("Terminating loop at 5 via 'break'\n");
            break; // Exits the loop entirely
        }
        printf("Processing index element: %d\n", i);
    }

    // 3. Do-While Loop (Guaranteed to execute at least once)
    printf("\n--- 3. Post-Condition Iteration (Do-While) ---\n");
    int system_status = 0;
    do {
        printf("Running primary system diagnostic sweep...\n");
        // Condition is checked AFTER execution
    } while (system_status == 1); 

    printf("Diagnostic closed.\n");
    return 0;
}
