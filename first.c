//Ternary Conditional Operator


#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    // Write your code below
    // Replace the placeholder text with a conditional expression
    char* result = (number > 0) ? "positive" : (number < 0) ? "negative" : "zero";

    printf("The number is %s\n", result);
    return 0;
}