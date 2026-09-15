#include <stdio.h>

int main() {
    //Write your code here
    float radius;

    scanf("%f", &radius);

    float pi = 3.1416;

    float area = pi * radius * radius;
    float perimeter = 2 * pi * radius;

    printf("Area: %.2f, Perimeter: %.2f\n",area, perimeter);
    
    return 0;
}