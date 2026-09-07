//hen, create a program that checks whether the person is old enough to drive (age 18 or older).\
Store the result (either 0 for false or 1 for true) in a variable called canDrive, and print both the age and the re
#include <stdio.h>

int main() {
    // Your code here: replace the zero with the age the task asks for
    int age = 16;
    // Your code here: replace the zero with the comparison that decides if the person is old enough to drive
    int canDrive = (age >= 18);
    printf("Age: %d\n", age);
    printf("Can drive? %d\n", canDrive);
    return 0;
}
