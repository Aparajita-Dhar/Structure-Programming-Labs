#include <stdio.h>
#include <string.h>

/* Topic: Fundamentals of Structs (User-Defined Data Structures)
   Demonstrates grouping completely different primitive data types under a single unified record template.
*/

// Defining a custom structure template representing system modules
struct SystemModule {
    int module_id;
    char module_tag[20];
    float processing_weight;
};

int main() {
    // Declaring and initializing a structured variable record
    struct SystemModule primary_core;

    primary_core.module_id = 101;
    strcpy(primary_core.module_tag, "Alpha_Core"); // Copying text array string into structure attribute
    primary_core.processing_weight = 0.87;

    printf("--- User-Defined Struct Architecture Record ---\n");
    printf("Module Identification Code: %d\n", primary_core.module_id);
    printf("Module Structural Name Tag: %s\n", primary_core.module_tag);
    printf("Assigned Processing Weight: %.2f%%\n", primary_core.processing_weight * 100);

    return 0;
}
