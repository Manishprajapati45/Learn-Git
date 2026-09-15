//take user name, age and grade as input and print with jhon is 14 years old and scored 9.5 grade.

#include <stdio.h>
int main() {
    char name[50];
    int age;
    float grade;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("%s is %d years old and scored %.2f grade\n", name, age, grade);

    return 0;

}
