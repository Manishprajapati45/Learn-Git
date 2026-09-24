#include <stdio.h>

int main() {
    // Declare and initialize variables here
    int number = 17;

    // Calculate remainder
    int remainder = number % 5;

    // Check if number is even or odd
    int is_even = (number % 2 == 0);

    // Print results
    printf("Number: %d\n", number);
    printf("Remainder when divided by 5: %d\n", remainder);
    printf("%d is even? %d\n", number, is_even);
    
    return 0;
}