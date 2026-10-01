// Else - if


#include <stdio.h>

int main() {
    int temperature;
    char scale;
    scanf("%d", &temperature);
    scanf(" %c", &scale);
    // Don't change above this line
    
    // Write your code here
    if (scale == 'F') {
        temperature = (temperature - 32) * 5 / 9;
    }
    if (temperature < 0) {
        printf("Freezing\n");
    } else if (temperature <= 20) {
        printf("Cold\n");
    } else if (temperature <= 30) {
        printf("Pleasant\n");
    } else {
        printf("Hot\n");
    }
    return 0;
}