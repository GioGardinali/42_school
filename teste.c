#include "stdio.h"

int main() {
    int *ptr = NULL;
    
    if (ptr == NULL) {
        printf("O ponteiro é nulo: %p\n", (void*)ptr);
    } else {
        printf("O ponteiro não é nulo: %p\n", (void*)ptr);
    }
    
    return 0;
}