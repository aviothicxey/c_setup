#include <stdio.h>

int main() {
    int num, num1, num2, greatest;

    // Corrected scanf (no trailing space)
    scanf("%d %d %d", &num, &num1, &num2);

    // Using ternary operator only
    greatest = (num >= num1 && num >= num2) ? num :
               (num1 >= num && num1 >= num2) ? num1 : num2;

    printf("The greatest number is %d\n", greatest);
    return 0;
}