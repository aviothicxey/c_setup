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

// #include <stdio.h>
// int square_area();
// void main(){
//     printf("going to calculate the area of square\n");
//     float area = square_area();
//     printf("Area of square is %.2f",area);
// }
// int square_area(){
//     float side;
//     printf("Enter the side of square: ");
//     scanf("%f",&side);
//     return (side*side);
// }

// #include <stdio.h>
// int fibonnaci(int n);
// int main(){
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     printf("Fibonnaci series: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",fibonnaci(i));
//     }
//     return 0;
// }
// int fibonnaci(int n){
//     if (n<=0){
//         return 0;
//     }
//     else if (n==1){
//         return 1;
//     }
//     else{
//         return (fibonnaci(n-1)+fibonnaci(n-2));
//     }

// }
// #include <stdio.h>
// #include<string.h>
// void reverse(char *str,int start,int end)
// {
//     if(start >= end)
//     return ;
//     else{
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         reverse(str,start+1,end-1);
//     }
// }
// int main(){
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s",str);
//    int n = strlen(str);
//     reverse(str,0,n-1);
//     printf("Reversed string: %s",str);

//     return 0;
// }
// #include <stdio.h>
// int sumof(int num){
//     if (num==0){
//         return 0;
//     }
//     return (num%10)+sumof(num/10);
// }
// int main(){
//     int num;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     int result=sumof(num);
//     printf("Sum of digits of %d is %d\n", num,result);
//     return 0;
// }

// #include <stdio.h>
// int fun(){
//     static int num = 16;
//     return num--;
// }
// int main(){
//     for (fun(); fun(); fun())
//     {
//         printf("%d ",fun());
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     static int i = 5;
//     if (--i){
//         main();
//         printf("%d",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     static int i = 5;
//     if (--i){
//         printf("%d",i);
//         main();
//     }
// }

// #include <stdio.h>
// void printnumbers(register int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n",i);
//     }
//     printf("Value of n: %d\n",n);
// }
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     printf("Printing numbers upto %d\n",num);
//     printnumbers(num);
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     int x=10;
//     int *ptr;
//     ptr=&x;
//     printf("%d",ptr);
//     printf("%d\n",*ptr);

// }
// #include <stdio.h>
// int main() {
//     int *p, a;
//     printf("Enter a number of a: ");
//     scanf("%d", &a);
//     p = &a; 
//     printf("The value of a is %d\n", *p);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//    int x = 10;
//    int y = 20;  
//    int *p1 = &x;
//    int *p2 = &y;
//    p1 = p2;
//    printf("%d %d\n", *p1, *p2);
   
//    return 0;
// }
// #include <stdio.h>
// int main() {
//    int a = 25 ,b;
//    int *ptr1, *ptr2;
//     ptr1 = &a;  
//     ptr2 = &b;
//     b = 36;
//     printf("%d %d %d %d\n", a, b, *ptr1, *ptr2);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a = 20;
//     int *p;
//     p = &a; 
//     printf("Pointer before increment:");
//     printf("%d\n", *p);
//     p++;
//     printf("Pointer after increment:");
//     printf("%d\n", *p);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int x=50;
//     int *ptr1=&x;
//     int *ptr2=&x;
//     int y=++*ptr2;
//     printf("%d%d",++*ptr1,y);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *ptr = arr;
//     printf("p\n", ptr);
//     printf("p\n", *ptr);
//     return 0;
// }

#include <stdio.h>
int main(){
    int numbers[]= {5,15,25,35};
    int *ptr = numbers;
    for (int i = 0;i<5;i++){
       printf("element %d = %d\n",i+1,*ptr);
       ptr++;
    }
    return 0;
}