//For Loop

#include <stdio.h>

int main() {
    for(int i=1; i<=5; i=i+1) {
        printf("%d \n", i);
    }

    for(float f=1.0; f<=5.0; f=f+1) {
        printf("%f \n", f);
    }
    
    for(char ch='a'; ch<='e'; ch=ch+1) {
        printf("%c \n", ch);
    }
    return 0;
}