// Nested if-else question

// Create a program that checks if someone can ride a rollercoaster. The requirements are:

// Must be at least 12 years old
// Must be taller than 150cm
// If they meet both requirements but are under 15, they need adult supervision
// Print exactly these messages for each case:

// If too young: Sorry, you are too young
// If not tall enough: Sorry, you are not tall enough
// If under 15 and no adult: Sorry, you need an adult with you
// If under 15 with adult: You can ride with adult supervision!
// If 15 or older and tall enough: You can ride by yourself!

#include <stdio.h>

int main() {
    int age, height;
    int hasAdult;
    scanf("%d %d %d", &age, &height, &hasAdult); // Don't change this line

    // Write your code below
    if (age >= 12) {
        if (height > 150) {
            if (age < 15) {
                if (hasAdult) {
                    printf("You can ride with adult supervision!");
                } else {
                    printf("Sorry, you need an adult with you");
                }
            } else {
                printf("You can ride by yourself!");
            }
        } else {
            printf("Sorry, you are not tall enough");
        }
    } else {
        printf("Sorry, you are too young");
    }
    return 0;
}
