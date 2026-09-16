//write a program that convert given no into minutes.

#include <stdio.h>

int main() {
    //Write your code here
    int hours;

    scanf("%d", &hours);

    int minutes = hours * 60;

    printf("%d minutes\n", minutes);

    return 0;
}