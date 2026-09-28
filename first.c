//Logical operator (part 2).

// truth table for or , and.
// for and both are right then also be right.
// for or need only one right.


#include <stdio.h>

int main() {
    // Type your code below
    int b1 = 2;
    int b2 = 5;
    int b3 = !((b1 + b2) > (b1 * b2));
    
    // Don't change the line below
    printf("b3 = %d\n", b3);
    
    return 0;
}