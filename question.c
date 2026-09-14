//take name and age of user as input and print with "Hello 'name', you are 'age', years old.".

#include <stdio.h>
int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old.\n", name, age);

    return 0;

}
