//Create a C program that:\
Declares and initializes:\
An integer variable age with value 25\
A float variable price with value 19.99\
A character variable grade with value 'A'\
A constant MAX_SCORE with value 100 using #define\
Calculate:\
The price after a 15% discount and store it in a variable discounted_price\
Convert the discounted_price to an integer using explicit casting, and store as rounded_price\
Make sure to format floating-point numbers to show exactly 2 decimal places.




#include <stdio.h>
#include <stdio.h>

#define MAX_SCORE 100

int main() {
    // Declare and initialize variables
    int age = 25;
    float price = 19.99f;
    char grade = 'A';

    // Calculate discounted price
    float discounted_price = price * 0.85f;

    // Convert to integer using casting
    int rounded_price = (int)discounted_price;

    // Print all variables
    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discounted_price);
    printf("Rounded Price: $%d\n", rounded_price);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);
    
    return 0;
}