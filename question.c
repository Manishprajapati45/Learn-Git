// Recap Challange 2.0

// Create a program that reads a person's weight (in kg) and height (in meters), then:

// Validates that weight is between 30 and 300 kg
// If weight is out of range, print: Weight out of range!
// Validates that height is between 1.0 and 2.5 meters
// If height is out of range, print: Height out of range!
// If all validations pass, calculates and prints the BMI (Body Mass Index) with 1 decimal place
// BMI formula: weight / (height * height)
// Prints the person's weight category based on BMI:
// Below 18.5: Underweight
// 18.5 to 24.9: Normal weight
// 25.0 to 29.9: Overweight
// 30.0 or higher: Obese


#include <stdio.h>

int main() {
    float weight, height, bmi;
    int weight_result, height_result;
    weight_result = scanf("%f", &weight);
    height_result = scanf("%f", &height);

    if (weight_result != 1) {
        printf("Invalid input type!\n");
        return 0;
    }
    
    if (weight < 30 || weight > 300) {
        printf("Weight out of range!\n");
        return 0;
    }
    
    
    if (height_result != 1) {
        printf("Invalid input type!\n");
        return 0;
    }
    
    if (height < 1.0 || height > 2.5) {
        printf("Height out of range!\n");
        return 0;
    }
    
    bmi = weight / (height * height);
    
    printf("BMI: %.1f\n", bmi);
    printf("Category: ");
    
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi < 25.0) {
        printf("Normal weight\n");
    } else if (bmi < 30.0) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    
    return 0;
}