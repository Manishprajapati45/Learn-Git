//For even number Loop

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int num = 2;

    // Your code here
    while (num <= n) {
        printf("%d \n", num);
        num += 2;
    }
    
    return 0;
}