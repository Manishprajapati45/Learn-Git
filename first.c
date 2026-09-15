#include <stdio.h>

int main() {
    //Write your code here
    int a, b;

    scanf("%d %d", &a, &b);

    printf("The sum of %d and %d = %d\n", a, b, a + b);
    
    printf("The subtraction of %d and %d = %d\n", a, b, a - b);

    printf("The product of %d and %d = %d\n", a, b, a * b);

    printf("The division of %d and %d = %d\n", a, b, a / b);

    return 0;
}