//calculator (+,-,*,/)


#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int Sum = a + b;
    int substract = a - b;
    int multiply = a * b;
    int divide = a/b;
    printf("Sum: %d\n",Sum);
    printf("Substraction: %d\n",substract);
    printf("Multiply: %d\n",multiply);
    printf("Divide: %d\n",divide);
    return 0;
}
