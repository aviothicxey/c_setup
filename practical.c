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
// #include <stdio.h>

// int main() {
//     int num, fact = 1;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     for (int i = 1; i <= num; i++) {
//         fact *= i;
//     }

//     printf("Factorial of %d is %d\n", num, fact);
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p,n,i;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     p=(int*)calloc(n,sizeof(int));
//     if (p == NULL){
//         printf("Memory allocation failed\n");
//         exit(0);
//     }
// else{
//     printf("memory allocted using malloc\n");
//     for(i=0;i<n;i++){
//         p[i]= i + 10 ;

//     }
//     printf("The elements are:\n");
//     for(i=0;i<n;i++){
//         printf("%d ",p[i]);
//     }
// }
//     free(p);
//     return 0;
// }

// #include <stdio.h>
// #define MAX 50

// int arr[MAX];
// int n = 0;

// void insert() {
//     int pos, val;
//     printf("Enter position and value: ");
//     scanf("%d %d", &pos, &val);
    
//     if(pos < 0 || pos > n) {
//         printf("Invalid position!\n");
//         return;
//     }
    
//     for(int i=n; i>pos; i--)
//         arr[i] = arr[i-1];
    
//     arr[pos] = val;
//     n++;
// }

// void update() {
//     int pos, val;
//     printf("Enter position and new value: ");
//     scanf("%d %d", &pos, &val);
    
//     if(pos < 0 || pos >= n) {
//         printf("Invalid position!\n");
//         return;
//     }
    
//     arr[pos] = val;
// }

// void delete() {
//     int pos;
//     printf("Enter position to delete: ");
//     scanf("%d", &pos);
    
//     if(pos < 0 || pos >= n) {
//         printf("Invalid position!\n");
//         return;
//     }
    
//     for(int i=pos; i<n-1; i++)
//         arr[i] = arr[i+1];
    
//     n--;
// }

// void display() {
//     printf("Array: ");
//     for(int i=0; i<n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// void search() {
//     int val, found=0;
//     printf("Enter value to search: ");
//     scanf("%d", &val);
    
//     for(int i=0; i<n; i++) {
//         if(arr[i] == val) {
//             printf("Found at position %d\n", i);
//             found = 1;
//         }
//     }
    
//     if(!found) printf("Not found\n");
// }

// int main() {
//     int choice;
//     while(1) {
//         printf("\n1.Insert 2.Update 3.Delete 4.Display 5.Search 6.Exit\n");
//         scanf("%d", &choice);
        
//         switch(choice) {
//             case 1: insert(); break;
//             case 2: update(); break;
//             case 3: delete(); break;
//             case 4: display(); break;
//             case 5: search(); break;
//             case 6: return 0;
//             default: printf("Invalid choice!\n");
//         }
//     }
// }

// #include<stdio.h>
// #define SIZE 100
// void display(int arr[], int n) {
//     for(int i=0;i<n;i++) printf("%d ",arr[i]);
//     printf("\n");}
// int main() {
//     int arr[SIZE], n=0, ch, pos, val, i, key;
//     while(1) {
//         printf("\n1.Insert 2.Update 3.Delete 4.Display 5.Search 6.Exit\n");
//         scanf("%d",&ch);
//         switch(ch) {
//             case 1:
//                 printf("Enter value and position: ");
//                 scanf("%d%d",&val,&pos);
//                 for(i=n;i>pos;i--) arr[i]=arr[i-1];
//                 arr[pos]=val; n++;
//                 break;
//             case 2:
//                 printf("Enter position and new value: ");
//                 scanf("%d%d",&pos,&val);
//                 arr[pos]=val;
//                 break;
//             case 3:
//                 printf("Enter position to delete: ");
//                 scanf("%d",&pos);
//                 for(i=pos;i<n-1;i++) arr[i]=arr[i+1];
//                 n--;
//                 break;
//             case 4:
//                 display(arr,n);
//                 break;
//             case 5:
//                 printf("Enter value to search: ");
//                 scanf("%d",&key);
//                 for(i=0;i<n;i++) {
//                     if(arr[i]==key) { printf("Found at %d\n",i); break; }
//                 }
//                 if(i==n) printf("Not found\n");
//                 break;
//             case 6:
//                 return 0;
//         }
//     }
// }


// #include <stdio.h>
// int sumArray(int arr[], int size) {
//     int sum = 0;
//     for(int i=0; i<size; i++)
//         sum += arr[i];
//     return sum;
// }
// int main() {
//     int arr[] = {1,2,3,4,5};
//     printf("Sum: %d\n", sumArray(arr, 5));
//     return 0;
// }


// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x=5, y=10;
//     printf("Before: x=%d y=%d\n", x, y);
//     swap(&x, &y);
//     printf("After: x=%d y=%d\n", x, y);
//     return 0;
// }


// #include <stdio.h>
// #define ROW 3
// #define COL 3

// void multiply(int a[ROW][COL], int b[ROW][COL]) {
//     int result[ROW][COL] = {0};
    
//     for(int i=0; i<ROW; i++)
//         for(int j=0; j<COL; j++)
//             for(int k=0; k<COL; k++)
//                 result[i][j] += a[i][k] * b[k][j];
                
//     printf("Product:\n");
//     for(int i=0; i<ROW; i++) {
//         for(int j=0; j<COL; j++)
//             printf("%d ", result[i][j]);
//         printf("\n");
//     }
// }

// int main() {
//     int a[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
//     int b[ROW][COL] = {{9,8,7},{6,5,4},{3,2,1}};
//     multiply(a, b);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main() {
    char mainString[1000], subString[100];
    int mainLength, subLength, count = 0;
     printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);
    mainLength = strlen(mainString);
    if (mainLength > 0 && mainString[mainLength-1] == '\n'){
        mainString[mainLength-1] = '\0';
        mainLength--; }
    printf("Enter the substring to search: ");
    fgets(subString, sizeof(subString), stdin);
    subLength = strlen(subString);
    if (subLength > 0 && subString[subLength-1] == '\n'){
        subString[subLength-1] = '\0';
        subLength--;  }
    if(subLength == 0){
        printf("Substring cannot be empty.\n");
        return 1; }
    for (int i = 0; i <= mainLength - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (mainString[i + j] != subString[j]) {
                break; }
        }
        if (j == subLength) {
            count++; }
    }
     printf("The substring '%s' appears %d times in the main string.\n", subString, count);
     return 0;}