// Write a program that uses a do-while loop to do the following:

// Initialize a variable sum to 0.
// Initialize a variable number to 1.
// In each iteration, add number to sum.
// Increment number by 2 in each iteration (i.e., 1, 3, 5, ...).
// print number and sum:
// Sum is: [The sum value]
// Num is: [The number value]
// Continue the loop as long as number is less than or equal to 50.
// Print the final value of sum after the loop finishes: Final Sum: [The final sum value]
 

#include <stdio.h>

int main() {
    // Initialize variables
    int sum = 0;
    int number = 1;

    // Your code here
    do {
        sum += number;
        number += 2;
        printf("Sum is: %d\n", sum);
        printf("Num is: %d\n", number);
    } while (number <= 50);

    // Print the final sum
    printf("Final Sum: %d\n", sum);
    return 0;
}
