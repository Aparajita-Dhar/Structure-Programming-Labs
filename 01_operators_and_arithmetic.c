#include <stdio.h>

/* Topic: Variables, Arithmetic, and Operators in C
   Demonstrates how expressions are evaluated using precedence and different operators.
*/

int main() {
    // 1. Arithmetic Operators
    int static_cost = 150;
    int variable_cost = 45;
    int total_units = 5;
    
    int total_cost = static_cost + (variable_cost * total_units); // Multiplication takes precedence
    int remainder = static_cost % total_units; // Modulo operator (returns remainder)

    printf("--- 1. Arithmetic Evaluation ---\n");
    printf("Total Cost: $%d\n", total_cost);
    printf("Remainder of division: %d\n", remainder);

    // 2. Relational and Logical Operators
    int user_age = 22;
    int has_clearance = 1; // 1 represents true in C

    printf("\n--- 2. Logical and Relational Evaluation ---\n");
    // Using logical AND (&&) and relational greater-than-or-equal-to (>=)
    if (user_age >= 18 && has_clearance == 1) {
        printf("Access Status: GRANTED (Both conditions met).\n");
    } else {
        printf("Access Status: DENIED.\n");
    }

    return 0;
}
