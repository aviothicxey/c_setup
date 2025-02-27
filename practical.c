// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     printf("You are %d years old.\n", age);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num1, num2, sum;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     sum = num1 + num2;
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// #define PI 3.1416

// int main() {
//     float radius, area, circumference;
//     printf("Enter radius: ");
//     scanf("%f", &radius);
//     area = PI * radius * radius;
//     circumference = 2 * PI * radius;
//     printf("Area: %.2f\n", area);
//     printf("Circumference: %.2f\n", circumference);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     float num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%f %f", &num1, &num2);
    
//     printf("Addition: %.2f\n", num1 + num2);
//     printf("Subtraction: %.2f\n", num1 - num2);
//     printf("Multiplication: %.2f\n", num1 * num2);
//     printf("Division: %.2f\n", num1 / num2);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     float u, a, t, V, S, T, H, b, c, p;
    
//     printf("Enter u, a, t, b, c, p: ");
//     scanf("%f %f %f %f %f %f", &u, &a, &t, &b, &c, &p);
    
//     V = u + (a * t);
//     S = (u * t) + (0.5 * a * t * t);
//     T = 2 * a + sqrt(b) + (9 * c);
//     H = sqrt(b * b + p * p);
    
//     printf("V = %.2f\nS = %.2f\nT = %.2f\nH = %.2f\n", V, S, T, H);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c, largest;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
//     printf("Largest number: %d\n", largest);
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b && a>c){
//         printf("%d is largest",a);
//     }
//     else if(b>a && b>c){
//         printf("%d is largest",b);
//     }
//     else{
//         printf("%d is largest",c);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter an alphabet: ");
//     scanf(" %c", &ch);

//     switch (ch) {
//         case 'a': case 'e': case 'i': case 'o': case 'u':
//         case 'A': case 'E': case 'I': case 'O': case 'U':
//             printf("Vowel\n");
//             break;
//         default:
//             printf("Consonant\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch ((num > 0) - (num < 0)) {
//         case 1: printf("Positive\n"); break;
//         case -1: printf("Negative\n"); break;
//         case 0: printf("Zero\n"); break;
//     }
//     return 0;
// }
#include <stdio.h>
int main() {
    int n, sum = 0, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers: %d\n", n, sum);
    return 0;
}

