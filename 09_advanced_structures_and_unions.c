#include <stdio.h>

/* Topic: Advanced Structural Schemas: Nested Structs, Pointers to Structs, and Data Unions
   Demonstrates intricate data formatting layouts and shared memory layouts.
*/

// Sub-structure template
struct Coordinate {
    int x_axis;
    int y_axis;
};

// Main nested structure template
struct SystemNode {
    int node_id;
    struct Coordinate location; // Structure within a structure (Nested)
};

// Union template (Variables share the EXACT SAME memory address space)
union MemoryBuffer {
    int integer_packet;
    char character_packet;
};

int main() {
    printf("--- 1. Nested Structure Setup ---\n");
    struct SystemNode node_alpha;
    node_alpha.node_id = 7001;
    node_alpha.location.x_axis = 45;
    node_alpha.location.y_axis = 90;

    printf("Node ID: %d | Spatial Location Coordinate: (%d, %d)\n", 
            node_alpha.node_id, node_alpha.location.x_axis, node_alpha.location.y_axis);

    printf("\n--- 2. Structure Pointers (Arrow Operator) ---\n");
    struct SystemNode *node_ptr = &node_alpha;
    // Accessing structural parameters using the pointer arrow (->) operator instead of dot (.)
    printf("Read via Pointer -> Node ID: %d\n", node_ptr->node_id);

    printf("\n--- 3. Struct Arrays vs Shared Union Space ---\n");
    // Instantiating a shared memory structure union
    union MemoryBuffer active_buffer;
    active_buffer.integer_packet = 65; // '65' is ASCII code value for 'A'

    // Printing reveals both point to the same space (Interpreting raw bits based on type context)
    printf("Union Integer Interpretation: %d\n", active_buffer.integer_packet);
    printf("Union Character Interpretation: %c\n", active_buffer.character_packet);

    return 0;
}
