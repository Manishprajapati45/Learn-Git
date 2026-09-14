//Take two intergers a & b from user. Print their sum with messege on the console.


#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int Sum = a + b;
    printf("The Sum of %d and %d is %d\n", a,b,Sum);
    return 0;
}
