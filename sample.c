// // #include <stdio.h>

// // int isEven(int num) {
// //     return num % 2 == 0;
// // }

// // int isOdd(int num) {
// //     return num % 2 != 0;
// // }

// // int main() {
// //     int number;

// //     printf("Enter an integer: ");
// //     scanf("%d", &number);

// //     if (isEven(number)) {
// //         printf("%d is even.\n", number);
// //     } else if (isOdd(number)) {
// //         printf("%d is odd.\n", number);
// //     }

// //     return 0;
// // }

// // #include <stdio.h>  
// // int main()  
// // {  
// //     int num;  
// //     printf("Enter an integer: ");  
// //     scanf("%d", &num);  
// //     if(num % 2 == 0)  
// //     printf("%d is even.", num);  
// //     else  
// //     printf("%d is odd.", num);  
// //     return 0;  
// // }
// // #include <stdio.h>  
// // int main()  
// // {  
// //     int num;  
// //     printf("Enter an integer: ");  
// //     scanf("%d", &num);  
// //     if(num % 2 == 0)  
// //     printf("%d is even.", num);  
// //     else  
// //     printf("%d is odd.", num);  
// //     return 0;  
// // }
// // #include <stdio.h>
// // #include <stdbool.h>
// // int main() {
// //     int myge;
// //     scanf("%d", &myge);
// //     int voteage = 18;
// //     printf("%d", myge>=voteage);
// //     return 0;
// // }
// // #include <stdio.h>
// // int main(){
// //     int countdown = 3;
// //     while(countdown <50){
// //         printf("%d\n", countdown);
// //         countdown++;
// //     }
// // }

// // #include <stdio.h>
// // int main(){
// //     int a;
// //     while(a<=10){
// //         printf("%d\n",a);
// //         a=a+2;
// //     }
// // }

// // #include <stdio.h>
// // int main(){
// // int dice = 1;
// // while(dice<=6){
// // if(dice < 6){
// //     printf("no yayzy\n");
// // } else{
// //     printf("yayzy!\n");
// // }
// // dice = dice +1;
// // }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i ,j;
// //     for (i = 1; i<= 2; ++i){
// //         printf("Outer: %d\n",i);
    
// //     for (j = 1; j<=3 ; ++j){
// //         printf("inner : %d\n",j);
// //     }
// // }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i;
// //     for (i=10;i<=100;i = i+10){
// //         printf("%d\n",i);
// //     }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i;
// //     for (i=1;i<=50;i=i+2){
// //         printf("%d\n",i);
// //     }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i;
// //     for (i=2;i<=512;i=i*2){
// //         printf("%d\n",i);
// //     }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i;
// //     int number;
// //     scanf("%d",&number);
// //     for(i=1;i<=10;i++){
// //         printf("%d x %d = %d\n",number,i,number*i);
// //     }
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i ;
// //     for (i=0;i<10;i++){
// //         if (i==4){
// //             break;
// //         }
// //         printf("%d\n",i);
// //     }
// // }

// // #include <stdio.h>
// // int main(){
// //     int mynumbers[]={1,2,3,4,5,6,7,8,9,10};
// //     printf("%d\n",mynumbers[0]);
// //     printf("%d\n",mynumbers[1]);
// //     printf("%d\n",mynumbers[2]);
// //     printf("%d\n",mynumbers[3]);
// //     printf("%d\n",mynumbers[4]);
// //     printf("%d\n",mynumbers[5]);
// //     printf("%d\n",mynumbers[6]);
// //     printf("%d\n",mynumbers[7]);
// //     printf("%d\n",mynumbers[8]);
// //     printf("%d\n",mynumbers[9]);
// //     return 0;
// // }



// // #include <stdio.h>
// //  int main(){
// //     int n=5;
// //     for (int i = 1;i<=n;i++){
// //         for (int j = 1 ; j <=n;j++){
// //             printf("*");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// //  }
// // #include <stdio.h>
// // int main(){
// // for(int i = 1; i <= 2; i++) {
// //     for(int j = 1; j <= 2; j++) {
// //             printf("%d %d\n", i, j);
// //     }
// // }
// // return 0;
// // }
// //     #include <stdio.h>
// // int main() {for(int i = 1; i <= 3; i++) {
// //     for(int j = 1; j <= i; j++) {
// //         printf("*");
// //     }
// //     printf("\n");
// // }return 0;}

// // #include <stdio.h>
// // int main(){
// //     for(int i = 1; i <= 3; i++) {
// //         for(int j = 1; j <= 3; j++) {
// //             printf("%d", j);
// //         }
// //         printf("\n");
// //     }
// //     return 0;    
// // }
// // # include <stdio.h>
// // void fun(int x)
// // {
// //     x = 20;
// // }

// // int main()
// // {
// //   int y = 30;
// //   fun(y);
// //   printf("%d", y);
// //  return 0;
// // }
// // # include <stdio.h>
// // void fun(int *ptr)
// // {
// //     *ptr = 20;
// // }

// // int main()
// // {
// //   int y = 10;
// //   fun(&y);
// //   printf("%d", y);

// //  return 0;
// // }

// // factorial

// // #include <stdio.h>
// // int main(){
// //     int a;
// //     int x=1;
// //     scanf("%d",&a);
// //     for (int i = 1;i<=a; i++){
// //         x = i*x;
       
// //     }
// //     printf("%d\n",x);
// //     return 0;
// // }

// // fibonnacci

// // #include <stdio.h>
// // int main(){
// //     int n;
// //     int a = 0;
// //     int b =1;
// //     int next;
// //     scanf("%d",&n);
// //     for (int i=0;i<n;i++){
// //         printf("%d",a);
// //         next = a+b;
// //         a = b;
// //         b = next;
// //     }
// //     printf("\n");
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int n; 
// //     int digit = 0;
// //     scanf("%d",&n);
// //     while (n!=0){
// //         int remainder = n%10;
// //         digit = digit + remainder;
// //         n = n/10;
        
// //     }
// //     printf("%d\n",digit);
// // }

// // #include <stdio.h>
// // int main(){
// //   int n, i, j;
// //   printf("Enter no of rows: ");
// //   scanf("%d", &n);
 
// //   for(i = 1; i <= n; i++){
// //       int a = 1;
// //       for(j = 1; j <= n; j++){
// //           printf("%d ", a);
// //            a = a + 2;
// //       }
// //       printf("\n");
// //   }
// //   return 0;
// // }

// // #include<stdio.h>
// // int main () {
// //     int n, i, j;
// //     printf("Enter no of rows: ");
// //     scanf("%d", &n);
// //     for(i=1; i<=n; i++){
// //         for(j=1; j<=n; j++){
// //             if(i==n/2+1 || j==n/2+1){
// //                 printf("*");
// //             }else{
// //                 printf(" ");
// //             }
// //         }printf("\n");
// //     }
// //     return 0;
// // }
// // #include<stdio.h>
// // int main () {
// //     int n;
// //     printf("Enter number of rows: ");
// //     scanf("%d", &n);
// //     int m;
// //     printf("Enter number of columns: ");
// //     scanf("%d", &m);
// //     for(int i =1; i<=n; i++){
// //         for(int j=1; j<=m; j++){
// //             if((i == 1 || i ==n) || (j == 1 || j == m)){
// //                 printf("*");
// //             }else {
// //                 printf(" ");
// //             }
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }


// // #include <stdio.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     return 0;
// // }


// // #include <stdio.h>
// // int main(){
// //     int n;
// //     scanf("%d",&n);
// //     for(int i =1; i <=n ; i++){
// //         for (int j= 1; j<=n-1;j++){
// //             printf(" ");
// //         }
// //         for (int k =1 ; k= 2*i-1 ; k++){
// //             printf("*");
// //         }
// //     }
// //     return 0;
// // }

// // experiment 11

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int number, original, digit, sum = 0, count = 0;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     original = number;
//     int temp = number;
//     while (temp != 0) {
//         count++;
//         temp = temp / 10;
//     }
//     temp = number;
//     while (temp != 0) {
//         digit = temp % 10;
//         sum += pow(digit, count);
//         temp = temp / 10;
//     }
//     if (sum == original) {
//         printf("%d is an Armstrong number.\n", original);
//     } else {
//         printf("%d is not an Armstrong number.\n", original);
//     }

//     return 0;
// }

// //experiment 12

// #include <stdio.h>

// int main() {
//     int num, count = 0, reverse = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     int temp = num;

//     while (temp != 0) {
//         count++;
//         reverse = reverse * 10 + (temp % 10);
//         temp /= 10;
//     }

//     printf("Number of digits: %d\n", count);
//     printf("Reversed number: %d\n", reverse);

//     return 0;
// }



// //experiment 13


// #include <stdio.h>
// int main() {
//     int n, first = 0, second = 1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", first);
//         next = first + second;
//         first = second;
//         second = next;
//     }
//     return 0;
// }


// experiment 14
// (a) 

// #include <stdio.h>
// int main() {
//     for (int i = 1; i <= 6; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //(b)
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i =1; i <=n ; i++){
//         for (int j= 1; j<=n-i;j++){
//             printf(" ");
//         }
//         for (int k =1 ; k<= i ; k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// //experiment 15


// #include <stdio.h>
// int main() {
//     for (int i = 1; i <= 6; i++) {
//         for (int j = 1; j <= 6; j++) {
//             printf("%d\t ", i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// //experiment 16

// #include <stdio.h>
// #include <math.h>
// int isPrime(int n) {
//     if (n < 2) return 0;
//     for (int i = 2; i <= n / 2; i++)
//         if (n % i == 0) return 0;
//     return 1;}
// int isArmstrong(int n) {
//     int original = n, sum = 0, digits = 0, temp = n;
//     while (temp != 0) {
//         digits++;
//         temp /= 10; }
//     temp = n;
//     while (temp != 0) {
//         sum += pow(temp % 10, digits);
//         temp /= 10; }
//     return (sum == original);}
// int isPerfect(int n) {
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0)
//             sum += i;}
//     return (sum == n);}
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (isPrime(num))
//         printf("%d is a Prime number.\n", num);
//     else
//         printf("%d is not a Prime number.\n", num);
//     if (isArmstrong(num))
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);
//     if (isPerfect(num))
//         printf("%d is a Perfect number.\n", num);
//     else
//         printf("%d is not a Perfect number.\n", num);

//     return 0;}


// //experiment 17

// #include <stdio.h>
// #define PI 3.14159

// float area(float r) {
//     return PI * r * r;
// }

// float circumference(float r) {
//     return 2 * PI * r;
// }

// int main() {
//     float radius;
//     printf("Enter the radius: ");
//     scanf("%f", &radius);

//     printf("Area = %.2f\n", area(radius));
//     printf("Circumference = %.2f\n", circumference(radius));

//     return 0;
// }


// //experiment 18

// #include <stdio.h>
// void swapByValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("Inside swapByValue - a: %d, b: %d\n", a, b);
// }
// void swapByReference(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 5, y = 10;
//     printf("Before swapByValue - x: %d, y: %d\n", x, y);
//     swapByValue(x, y);
//     printf("After swapByValue - x: %d, y: %d\n", x, y);

//     printf("\nBefore swapByReference - x: %d, y: %d\n", x, y);
//     swapByReference(&x, &y);
//     printf("After swapByReference - x: %d, y: %d\n", x, y);
//     return 0;
// }

// #include<stdio.h>
//  int main(){
//  printf("Hello World"); 
// return 0;
// }




// #include <stdio.h>
// #include <string.h>
// int main() {
//     char mainString[1000], subString[100];
//     int mainLength, subLength, count = 0;
//      printf("Enter the main string: ");
//     fgets(mainString, sizeof(mainString), stdin);
//     mainLength = strlen(mainString);
//     if (mainLength > 0 && mainString[mainLength-1] == '\n'){
//         mainString[mainLength-1] = '\0';
//         mainLength--; }
//     printf("Enter the substring to search: ");
//     fgets(subString, sizeof(subString), stdin);
//     subLength = strlen(subString);
//     if (subLength > 0 && subString[subLength-1] == '\n'){
//         subString[subLength-1] = '\0';
//         subLength--;  }
//     if(subLength == 0){
//         printf("Substring cannot be empty.\n");
//         return 1; }
//     for (int i = 0; i <= mainLength - subLength; i++) {
//         int j;
//         for (j = 0; j < subLength; j++) {
//             if (mainString[i + j] != subString[j]) {
//                 break; }
//         }
//         if (j == subLength) {
//             count++; }
//     }
//      printf("The substring '%s' appears %d times in the main string.\n", subString, count);
//      return 0;}

// #include <stdio.h>
// int sumOfDigits(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return (n % 10) + sumOfDigits(n / 10);
// }
// int main() {
//     int number;
//     scanf("%d", &number);
//     int sum = sumOfDigits(number);
//     printf("The sum of the digits of %d is: %d\n", number, sum);
//     return 0;
// }


// #include <stdio.h>
// struct Distance {
//     int feet;
//     float inches;
// };
// int main() {
//     struct Distance dist1, dist2, sum;
//     printf("Enter feet for distance 1: ");
//     scanf("%d", &dist1.feet);
//     printf("Enter inches for distance 1: ");
//     scanf("%f", &dist1.inches);
//     printf("\nEnter feet for distance 2: ");
//     scanf("%d", &dist2.feet);
//     printf("Enter inches for distance 2: ");
//     scanf("%f", &dist2.inches);
//     sum.feet = dist1.feet + dist2.feet;
//     sum.inches = dist1.inches + dist2.inches;
//     if (sum.inches >= 12.0) {
//         sum.feet += (int)(sum.inches / 12);
//         sum.inches = sum.inches - ((int)(sum.inches / 12) * 12);
//     }
//     printf("\nSum of distances = %d feet %.2f inches\n", sum.feet, sum.inches);
//     return 0;
// }

// #include <stdio.h>
// struct Complex {
//     float real;
//     float imag;
// };
// struct Complex addComplex(struct Complex num1, struct Complex num2) {
//     struct Complex sum;
//     sum.real = num1.real + num2.real;
//     sum.imag = num1.imag + num2.imag;
//     return sum;
// }
// int main() {
//     struct Complex complex1, complex2, result;
//     printf("Enter the real and imaginary parts of the first complex number:\n");
//     scanf("%f %f", &complex1.real, &complex1.imag);
//     printf("Enter the real and imaginary parts of the second complex number:\n");
//     scanf("%f %f", &complex2.real, &complex2.imag);
//     result = addComplex(complex1, complex2);
//     printf("Sum = %.2f + %.2fi\n", result.real, result.imag);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #define MAX_PHONES 2
// #define MAX_EMPLOYEES 5
// struct Employee {
//     int id;
//     char name[50];
//     float salary;
//     char phone_numbers[MAX_PHONES][15]; };
// int main() {
//     struct Employee employees[MAX_EMPLOYEES];
//     printf("Enter details for %d employees:\n", MAX_EMPLOYEES);
//     for(int i = 0; i < MAX_EMPLOYEES; i++) {
//         printf("\nEmployee %d:\n", i+1);
//         printf("Enter ID: ");
//         scanf("%d", &employees[i].id);
//         printf("Enter Name: ");
//         scanf("%s", employees[i].name);
//         printf("Enter Salary: ");
//         scanf("%f", &employees[i].salary);
//         for(int j = 0; j < MAX_PHONES; j++) {
//             printf("Enter Phone %d: ", j+1);
//             scanf("%s", employees[i].phone_numbers[j]);}
//     }
//     printf("\n\nEmployee Details:\n");
//     for(int i = 0; i < MAX_EMPLOYEES; i++) {
//         printf("\nEmployee %d:\n", i+1);
//         printf("ID: %d\n", employees[i].id);
//         printf("Name: %s\n", employees[i].name);
//         printf("Salary: %.2f\n", employees[i].salary);
//         printf("Phone Numbers:\n");
//         for(int j = 0; j < MAX_PHONES; j++) {
//             printf("%d. %s\n", j+1, employees[i].phone_numbers[j]);}
//     }
//     return 0;}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX_LINE_LENGTH 1024
// int main() {
//     char filename[100], findString[100], replaceString[100];
//     char line[MAX_LINE_LENGTH];
//     FILE *file, *tempFile;
//     int count = 0;
//     printf("Enter filename: ");
//     scanf("%s", filename);
//     printf("Enter string to find: ");
//     scanf("%s", findString);
//     printf("Enter string to replace with: ");
//     scanf("%s", replaceString);
//     file = fopen(filename, "r");
//     if (file == NULL) {
//         perror("Error opening file");
//         return 1;
//     }
//     tempFile = fopen("temp.txt", "w");
//     if (tempFile == NULL) {
//         perror("Error creating temp file");
//         fclose(file);
//         return 1;
//     }
//     while (fgets(line, sizeof(line), file) != NULL) {
//         char *position = line;
//         char *found;
//         char newLine[MAX_LINE_LENGTH * 2] = ""; 
//         while ((found = strstr(position, findString)) != NULL) {
//             count++;
//             strncat(newLine, position, found - position);
//             strcat(newLine, replaceString);
//             position = found + strlen(findString);
//         }
//         strcat(newLine, position);
//         fputs(newLine, tempFile);
//     }
//     fclose(file);
//     fclose(tempFile);
//     remove(filename);
//     rename("temp.txt", filename);
//     printf("String '%s' found and replaced %d times.\n", findString, count);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%2 ==0 || n%3 ==0 ||n%5 ==0){
//         printf("not a prime number");
//     }
//     else if (n==2){
//         printf("not a prime number");
//     }
//     else{
//         printf("prime number");
//     }
//     return 0;
// }

#include <stdio.h>

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number to find factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    return 0;
}
