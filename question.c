// Write a program that: 

// Takes two integers as input from the user
// Calculates and prints:
// The remainder when the first number is divided by the second
// Whether the sum of the two numbers is even or odd
// Whether the first number is divisible by the second (no remainder)



#include <stdio.h>

int main() {
    int first, second;
    
    // Get user input
    scanf("%d", &first);
    scanf("%d", &second);
    
    // Calculate and display results
    int remainder = first % second;
    int sum = first + second;
    int is_sum_odd = sum % 2 == 1;
    int is_divisible = remainder == 0;

    printf("Remainder: %d\n", remainder);
    printf("Sum is odd: %d\n", is_sum_odd);
    printf("First is divisible by second: %d\n", is_divisible);
    
    return 0;
}