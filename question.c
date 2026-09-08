//Create a program that calculates the area of a circle. Your program should:
//Define a constant PI with the value 3.14159
//Calculate the area of the circle using the formula: area = PI * radius * radius
//Print the calculated area with exactly 2 decimal places in the format: Area: X.XX followed by a newline
//Use radius = 5 and either float or double for the area variable.

//Expected output:
//Area: 78.54

//Note: Use %.2f as the format specifier in printf, and end your output with \n.

#include <stdio.h>

int main() {
    // Define your PI constant here
    #define PI 3.14159
    
    int radius = 5;
    
    // Calculate the area here
    float area = PI * radius * radius;
    
    // Print the area here
    printf("Area: %.2f\n", area);
    
    return 0;
}
