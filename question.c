//Arithmetic operations
// take two integers a & b with some constant values,Perform aritmetic operations (+,-,*,/,%). print with the appropriate message on the console.
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 7;
    printf("The sum of %d and %d is: %d\n", a, b, a + b);
    printf("The difference of %d and %d is: %d\n", a, b, a - b);
    printf("The product of %d and %d is: %d\n", a, b, a * b);
    printf("The quotient of %d and %d is: %d\n", a, b, a / b);
    printf("The remainder of %d and %d is: %d\n", a, b, a % b);
    return 0;
}
