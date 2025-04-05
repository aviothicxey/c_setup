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
// #include <stdio.h>
// int main() {
//     int n, sum = 0, i = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while (i <= n) {
//         sum += i;
//         i++;
//     }

//     printf("Sum of first %d natural numbers: %d\n", n, sum);
//     return 0;
// }

// #include <stdio.h>
// void myfunction(char name[]){
//     printf("this is %s\n", name);
// }
// int main(){
//     myfunction("Liam");
//     myfunction("Emma");
//     myfunction("Noah");
//     return 0;

// }

// #include <stdio.h>
// void total(int a, int b){
//     int sum = a+b;
//     printf("the sum of %d and %d is : %d\n",a,b,sum);
// }
// int main(){
//     total(10,20);
//     total(30,40);
//     total(50,60);
//     return 0;
// }

// #include <stdio.h>
// void myfunction(int number[]){
//     for (int i = 0;i<7;i++){
//         printf("%d\n",number[i]);
//     }
// }
// int main(){
//     int number[] = {10,19,12,13,14,14,15,76,97};
//     myfunction(number);
//     return 0;
// }

// #include <stdio.h>
// int myfunction(int x){
//     return 5 + x;
// }
// int main(){
//     printf("result is : %d", myfunction(3));
//     return 0;
// }

// #include <stdio.h>
// int may(int x, int y){
//     return x + y;
// }
// int main(){
//     int might = may(10,20);
//     printf("result is : %d",might);
//     return 0;
// }

// #include <stdio.h>
// float celcius(float f){
//     return (f-32)*5/9;
// }
// int main(){
//     float f;
//     scanf("%f",&f);
//     float r = celcius(f);
//     printf("The temperature in celcius is : %.2f",r);
//     return 0;
// }
// #include <stdio.h>
// int x = 5;
// void function(){
// int x = 22;
// printf("x = %d\n",x);
// }
// int main(){
// function();
// printf("x = %d\n",x);
// return 0;
// }

// #include <stdio.h>
// int my(int a , int b){
//     return a + b;
// }
// int main(){
//   int c =  my(10,20);
//     printf("%d\n",c);
//     return 0;
// }

// #include <stdio.h>
// int my(int a , int b){
//     return a + b;
// }
// int main(){
//   int c =  my(10,20);
//     printf("%d\n",c);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i ;
//     scanf("%d\n",&i);
//     if (i=1){
//         printf("*");
//     }
//     else if(i = 2){
//         printf("**\n*");
//     }
//     else if (i = 3){
//         printf("***\n ** \n *");
//     }
//     else{
//         printf("****\n ***\n **\n *");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// bool isPrime(int num) {
//   // 0 and 1 are not prime numbers
//   if (num <= 1) return false;
  
//   // 2 is the only even prime number
//   if (num == 2) return true;
  
//   // Any even number greater than 2 is not prime
//   if (num % 2 == 0) return false;
  
//   // Check divisibility from 3 to sqrt(num)
//   for (int i = 3; i * i <= num; i += 2) {
//     if (num % i == 0) return false;
//   }
  
//   return true;
// }

// int main() {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
  
//   if (isPrime(num)) {
//     printf("True");
//   } else {
//     printf("False");
//   }
  
//   return 0;
// }

// #include <stdio.h>
// void function(){
//     int x = 5;
//     printf("%d\n",x);
// }
// int main(){
//     function();
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int myAge = 43;
//     printf("%d\n",myAge);
//     printf("%p\n",&myAge);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int myAge = 43;    
// int* ptr = &myAge;  
// printf("%d\n", myAge);
// printf("%p\n", &myAge);
// printf("%p\n", ptr);
// }


// #include <stdio.h>
//  int main(){
//     int rows;
//     scanf("%d",&rows);
//     for( int i = 1 ; i <= rows ; i++){
//        for ( int j =1 ; j <= rows -i ; j++){
//            printf(" ");
//        }
//          for (int k = 1 ; k <= 2*i-1 ; k++){
//               printf("*");
//          }
//          printf("\n");
//     }
//  }


// #include <stdio.h>
// int main(){
//     int rows ;
//     scanf("%d",&rows);
//     for ( int i = 1 ; i<= rows ; i++){
//         for (int j =1 ; j<= i ; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// void findRanks(int leaderboard[], int n, int playerScores[], int m) {
//     // Remove duplicate scores to create a unique ranking system
//     int uniqueScores[n], rank[n], uniqueCount = 0;
//     uniqueScores[0] = leaderboard[0];
//     rank[0] = 1;
//     uniqueCount++;

//     for (int i = 1; i < n; i++) {
//         if (leaderboard[i] != leaderboard[i - 1]) {
//             uniqueScores[uniqueCount] = leaderboard[i];
//             rank[uniqueCount] = uniqueCount + 1;
//             uniqueCount++;
//         }
//     }

//     // Finding rank for each player's score
//     int i = uniqueCount - 1; // Start from the lowest rank
//     for (int j = 0; j < m; j++) {
//         while (i >= 0 && playerScores[j] >= uniqueScores[i]) {
//             i--; // Move up in the leaderboard
//         }
//         printf("Rank after game %d: %d\n", j + 1, i + 2);
//     }
// }

// int main() {
//     int n, m;
    
//     // Input leaderboard
//     printf("Enter number of leaderboard scores: ");
//     scanf("%d", &n);
//     int leaderboard[n];
//     printf("Enter leaderboard scores (descending order): ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &leaderboard[i]);
//     }

//     // Input player's scores
//     printf("Enter number of games played: ");
//     scanf("%d", &m);
//     int playerScores[m];
//     printf("Enter player's scores (ascending order): ");
//     for (int i = 0; i < m; i++) {
//         scanf("%d", &playerScores[i]);
//     }

//     // Find the player's ranks
//     findRanks(leaderboard, n, playerScores, m);

//     return 0;
// }

// #include <stdio.h>
//  int main(){
//     int t;
//     scanf("%d",&t);
//    if ( t % 2 == 0 || t % 3 == 0 || t % 5 ==0){
//     printf("1");
//    }
//    else if (t == 2){
//     printf("1");
//    }
//    else{
//     printf("0");
//    }
//    return 0;
//  }
#include <stdio.h>

int main() {
    int num, fact = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", num, fact);
    
    return 0;
}
