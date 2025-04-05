// #include <stdio.h>

// int isEven(int num) {
//     return num % 2 == 0;
// }

// int isOdd(int num) {
//     return num % 2 != 0;
// }

// int main() {
//     int number;

//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     if (isEven(number)) {
//         printf("%d is even.\n", number);
//     } else if (isOdd(number)) {
//         printf("%d is odd.\n", number);
//     }

//     return 0;
// }

// #include <stdio.h>  
// int main()  
// {  
//     int num;  
//     printf("Enter an integer: ");  
//     scanf("%d", &num);  
//     if(num % 2 == 0)  
//     printf("%d is even.", num);  
//     else  
//     printf("%d is odd.", num);  
//     return 0;  
// }
// #include <stdio.h>  
// int main()  
// {  
//     int num;  
//     printf("Enter an integer: ");  
//     scanf("%d", &num);  
//     if(num % 2 == 0)  
//     printf("%d is even.", num);  
//     else  
//     printf("%d is odd.", num);  
//     return 0;  
// }
// #include <stdio.h>
// #include <stdbool.h>
// int main() {
//     int myge;
//     scanf("%d", &myge);
//     int voteage = 18;
//     printf("%d", myge>=voteage);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int countdown = 3;
//     while(countdown <50){
//         printf("%d\n", countdown);
//         countdown++;
//     }
// }

// #include <stdio.h>
// int main(){
//     int a;
//     while(a<=10){
//         printf("%d\n",a);
//         a=a+2;
//     }
// }

// #include <stdio.h>
// int main(){
// int dice = 1;
// while(dice<=6){
// if(dice < 6){
//     printf("no yayzy\n");
// } else{
//     printf("yayzy!\n");
// }
// dice = dice +1;
// }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i ,j;
//     for (i = 1; i<= 2; ++i){
//         printf("Outer: %d\n",i);
    
//     for (j = 1; j<=3 ; ++j){
//         printf("inner : %d\n",j);
//     }
// }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i;
//     for (i=10;i<=100;i = i+10){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i;
//     for (i=1;i<=50;i=i+2){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i;
//     for (i=2;i<=512;i=i*2){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i;
//     int number;
//     scanf("%d",&number);
//     for(i=1;i<=10;i++){
//         printf("%d x %d = %d\n",number,i,number*i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int i ;
//     for (i=0;i<10;i++){
//         if (i==4){
//             break;
//         }
//         printf("%d\n",i);
//     }
// }

// #include <stdio.h>
// int main(){
//     int mynumbers[]={1,2,3,4,5,6,7,8,9,10};
//     printf("%d\n",mynumbers[0]);
//     printf("%d\n",mynumbers[1]);
//     printf("%d\n",mynumbers[2]);
//     printf("%d\n",mynumbers[3]);
//     printf("%d\n",mynumbers[4]);
//     printf("%d\n",mynumbers[5]);
//     printf("%d\n",mynumbers[6]);
//     printf("%d\n",mynumbers[7]);
//     printf("%d\n",mynumbers[8]);
//     printf("%d\n",mynumbers[9]);
//     return 0;
// }



// #include <stdio.h>
//  int main(){
//     int n=5;
//     for (int i = 1;i<=n;i++){
//         for (int j = 1 ; j <=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
//  }
// #include <stdio.h>
// int main(){
// for(int i = 1; i <= 2; i++) {
//     for(int j = 1; j <= 2; j++) {
//             printf("%d %d\n", i, j);
//     }
// }
// return 0;
// }
//     #include <stdio.h>
// int main() {for(int i = 1; i <= 3; i++) {
//     for(int j = 1; j <= i; j++) {
//         printf("*");
//     }
//     printf("\n");
// }return 0;}

// #include <stdio.h>
// int main(){
//     for(int i = 1; i <= 3; i++) {
//         for(int j = 1; j <= 3; j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;    
// }
// # include <stdio.h>
// void fun(int x)
// {
//     x = 20;
// }

// int main()
// {
//   int y = 30;
//   fun(y);
//   printf("%d", y);
//  return 0;
// }
// # include <stdio.h>
// void fun(int *ptr)
// {
//     *ptr = 20;
// }

// int main()
// {
//   int y = 10;
//   fun(&y);
//   printf("%d", y);

//  return 0;
// }

// factorial

// #include <stdio.h>
// int main(){
//     int a;
//     int x=1;
//     scanf("%d",&a);
//     for (int i = 1;i<=a; i++){
//         x = i*x;
       
//     }
//     printf("%d\n",x);
//     return 0;
// }

// fibonnacci

// #include <stdio.h>
// int main(){
//     int n;
//     int a = 0;
//     int b =1;
//     int next;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++){
//         printf("%d",a);
//         next = a+b;
//         a = b;
//         b = next;
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n; 
//     int digit = 0;
//     scanf("%d",&n);
//     while (n!=0){
//         int remainder = n%10;
//         digit = digit + remainder;
//         n = n/10;
        
//     }
//     printf("%d\n",digit);
// }

// #include <stdio.h>
// int main(){
//   int n, i, j;
//   printf("Enter no of rows: ");
//   scanf("%d", &n);
 
//   for(i = 1; i <= n; i++){
//       int a = 1;
//       for(j = 1; j <= n; j++){
//           printf("%d ", a);
//            a = a + 2;
//       }
//       printf("\n");
//   }
//   return 0;
// }

// #include<stdio.h>
// int main () {
//     int n, i, j;
//     printf("Enter no of rows: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n; j++){
//             if(i==n/2+1 || j==n/2+1){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main () {
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     int m;
//     printf("Enter number of columns: ");
//     scanf("%d", &m);
//     for(int i =1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             if((i == 1 || i ==n) || (j == 1 || j == m)){
//                 printf("*");
//             }else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1; i <=n ; i++){
        for (int j= 1; j<=n-1;j++){
            printf(" ");
        }
        for (int k =1 ; k= 2*i-1 ; k++){
            printf("*");
        }
    }
    return 0;
}