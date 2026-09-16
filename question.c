//write a program that calculate compound interest(CI).

#include <stdio.h>
#include <math.h>

int main() {
    //Write your code here
    double P, R, T;

    scanf("%lf %lf %lf", &P, &R, &T);

    double CI = P * pow((1 + R / 100), T) - P;

    printf("%.2lf\n", CI);
    
    return 0;
}
