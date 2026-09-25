//Assigment operators

//. == simple operators
//. += add and aasign
//. -= subract and assign
//. *= multiply and assign
//. /= divide and assign
//. %= modulo and assign


#include <stdio.h>

#include <stdio.h>

int main() {
    int num = 10;
    
    num += 5;
    printf("After += 5: %d\n", num);
    
    num -= 3;
    printf("After -= 3: %d\n", num);
    
    num *= 2;
    printf("After *= 2: %d\n", num);
    
    num /= 3;
    printf("After /= 3: %d\n", num);
    
    num %= 4;
    printf("After %%= 4: %d\n", num);
    
    return 0;
}