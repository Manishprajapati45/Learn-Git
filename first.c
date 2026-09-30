//if statement
#include <stdio.h>

int main() {
    int temperature;
    scanf("%d", &temperature);

    if (temperature > 30) {
        printf("It's a hot day!\n");
    } 
    
    if (temperature <= 30 && temperature >= 20 ) {
        printf("The weather is nice.\n");
    }
    
    if (temperature < 20) {
        printf("It's a bit cold today.\n");
    } 
    
    return 0;
}