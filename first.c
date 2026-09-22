#include <stdio.h>

int main() {
    double result = 5.65;
    int grade;
    
    // Use explicit casting to convert result (double) to grade (int)
    grade = (int)result;
    
    printf("The grade is: %d\n", grade);
    
    return 0;
}