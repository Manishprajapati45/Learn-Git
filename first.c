//increment and decrementgit 

#include <stdio.h>

int main() {
    int a = 1, b = 2;
    printf("%d\n", ++a); //2
    printf("%d\n", --a); //1
    printf("%d\n", a++); //1
    printf("%d\n", a--);  //2
    printf("%d\n", ++b); //3
    printf("%d\n", b++); //3
    printf("%d\n", b); //4

    return 0;
}