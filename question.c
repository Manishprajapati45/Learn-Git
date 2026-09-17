//Calculate A raise to the power B
#include <stdio.h>

int main() {
    //Write your code here 
    int a, b;

    scanf("%d, %d", &a, &b);

    int result = 1;
    for (int i = 1; i <= b; i++) {
        result *= a;
    }

    printf("%d\n", result);

    return 0;
}