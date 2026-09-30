//if - else


#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    // Don't change above this line
    
    // Write your code here
    if (score >= 60) {
        printf("Pass\n");
    } else { 
        printf("Fail\n");
    }

    return 0;
}