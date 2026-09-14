//take two integers a & b from user and print the value after swap their values.


#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first no: ");
    scanf("%d", &a);
    printf("Enter second no: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swaping a = %d and b = %d\n", a ,b);
    return 0;
}
