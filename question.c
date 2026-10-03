// Recap Challange

#include <stdio.h>

int main() {
    float height;
    int id, age;
    scanf("%d", &id);
    scanf("%d", &age);
    scanf("%f", &height);
    int height_cm;
    int days;
    
    
    days = age * 365;
    height_cm = height * 100;
    
    printf("ID: %d\n", id);
    printf("Age: %d years (%d days)\n", age, days);
    printf("Height: %.2f m (%d cm)\n", height, height_cm);
    
    return 0;
}