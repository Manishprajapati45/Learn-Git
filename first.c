#include <stdio.h>

int main() {
    float celsius = 25.0;
    double fahrenheit;
    fahrenheit = (celsius * 9.0/5.0) + 32.0;
    printf("%.1f degrees Celsius is equal to %.1f degrees Fahrenheit\n", celsius, fahrenheit);
    return 0;
}