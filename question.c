//Covert celsuis into fahrenheit.

#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    printf("Enter Temperature in celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = (9*celsius/5)+32;

    printf("Temperature in fahrenheit = %.2f\n", fahrenheit);

    return 0;

}