// Rational operators

//. == equal.           1 == 2 returns 0 (false)
//. != not equal.       1 != 2 returns 1 (true)
//. > greater then.     1 > 2 returns 0 (false)
//. < less then.        1 < 2 returns 1 (true)
//. >= grater or equal. 1 >= 2 returns 0 (false)
//. <= less or equal.   1 <= 2 returns 1 (true)


#include <stdio.h>

int main() {
    // Type your code below
    int n1 = 8;
    int n2 = 9;
    int n3 = n1 > n2;
    
    // Don't change the line below
    printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
    
    return 0;
}