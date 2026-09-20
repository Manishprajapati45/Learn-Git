//Write a program that declares and initializes two variables with valid names according to C naming rules.\
The first variable should be an integer named "userAge" set to 25. The second variable should be a float named "item_price" set to 9.99. \
Then print both variables using printf in the following format:\
User age: 25\
Item price: 9.99

#include <stdio.h>

int main() {
    // Declare and initialize two variables with valid names
    int userAge;
    float item_price;

    userAge = 25;
    item_price = 9.99;
    // Print both variables
    printf("User age: %d\n", userAge);
    printf("Item price: %.2f\n", item_price);
    
    return 0;
}