//take two integers a & b from user and print the value after swap their values.


#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
