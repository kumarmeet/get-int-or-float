#include <stdio.h>
#include <stdlib.h>

int main() {

    int intValue = 0;
    float floatValue = 0;

    printf("Enter number:\t");
    scanf("%f", &floatValue);

    intValue = (int) floatValue; //cast the float value to int

    if(intValue < floatValue) {
        printf("This is float value");
    } else if(intValue == floatValue) {
        printf("This is int value");
    }

    return 0;
}
