//Input Validation

#include <stdio.h>

int main() {
    int number;
    int result = scanf("%d", &number);
    
    if (result != 1) {
        printf("Invalid input type!\n");
    } else if (number < 10 || number > 50) {
        printf("Out of range!\n");
    } else {
        printf("Valid input!\n");
    }
    
    return 0;
}