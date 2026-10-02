//scanf() basics


#include <stdio.h>

int main() {
    // Declare your variables here
    int num1;
    float num2, sum;

    scanf("%d", &num1);
    scanf("%f", &num2);
    // Your code here

    sum = num1 + num2;

    printf("num1 = %d\n", num1);
    printf("num2 = %.2f\n", num2);
    printf("sum = %.2f\n", sum);

    return 0;
}