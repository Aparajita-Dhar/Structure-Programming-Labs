#include <stdio.h>
#include <math.h> // Library function header example

/* Topic: Program Modules, Functions, Scope, and Recursion
   Demonstrates how to split code into reusable blocks, handle scope, and execute recursive calls.
*/

// Global variable scope (accessible by any function in this file)
int global_system_id = 999;

// Function Prototypes (Declaring functions before main)
void check_scope_and_storage();
int calculate_factorial(int n);

int main() {
    printf("--- 1. Library Functions Example ---\n");
    // Using log and power functions from <math.h>
    printf("Value of 2 raised to power 3: %.2f\n", pow(2, 3));

    printf("\n--- 2. Storage Classes & Scope Rules ---\n");
    // Calling the function twice to observe 'static' storage behavior
    check_scope_and_storage();
    check_scope_and_storage();

    printf("\n--- 3. Mathematical Recursion ---\n");
    int number = 5;
    int result = calculate_factorial(number);
    printf("Factorial of %d via recursive stack execution: %d\n", number, result);

    return 0;
}

// User-defined function demonstrating local scope and static variables
void check_scope_and_storage() {
    int local_counter = 1;          // Automatic storage class (resets every time)
    static int static_counter = 1;  // Static storage class (retains value between calls)

    printf("Local Counter: %d | Static Counter: %d | Global ID: %d\n", 
            local_counter++, static_counter++, global_system_id);
}

// Recursive function: calls itself until a base condition is met
int calculate_factorial(int n) {
    if (n <= 1) { // Base case to prevent infinite looping
        return 1;
    }
    return n * calculate_factorial(n - 1); // Recursive step
}
