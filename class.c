// #include <stdio.h>
// #include <math.h>
// int main(){
//     float num , res;
//     printf("Enter a number: ");
//     scanf("%f", &num);
//     res = sqrt(num);
//     printf("Square root = %.2f",res);
//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// int main(){
//    char ch;
//     printf("Enter a character: ");
//     scanf("%c",&ch);
//     if (islower(ch)){
//         printf("Lowercase alphabet\n");
//     }
//     else{
//         printf("Uppercase alphabet\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int value;
//     printf("Enter a number: ");
//     scanf("%d",&value);
//     printf("Absolute value = %d",abs(value));
//     return 0;
// }

// #include <stdio.h>
// int add(int a, int b);
// int main(){
//     int res;
//     res = add(10,20);
//     printf("Sum = %d",res);
//     return 0;
// }
// int add(int a, int b){
//     int c;
//     c = a+b;
//     return (c);
// }

#include <stdio.h>
int square_area();
void main(){
    printf("going to calculate the area of square\n");
    float area = square_area();
    printf("Area of square is %.2f",area);
}
int square_area(){
    float side;
    printf("Enter the side of square: ");
    scanf("%f",&side);
    return (side*side);
}
