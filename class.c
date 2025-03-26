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

// #include <stdio.h>
// int main(){
//     int numbers[]= {5,15,25,35};
//     int *ptr = numbers;
//     for (int i = 0;i<5;i++){
//        printf("element %d = %d\n",i+1,*ptr);
//        ptr++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=20,c=30;
//     int *ptr[3];
//     ptr[0]=&a;
//     ptr[1]=&b;
//     ptr[2]=&c;
//     printf("%d %d %d\n",*ptr[0],*ptr[1],*ptr[2]);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int *p;
//     int val[7]={11,22,33,44,55,66,77};
//     p = &val[0];
//     for (int i = 0; i < 7; i++)
//     {
//         printf("val[%d]:value is %d and address is %u\n",i,*p,p);
//         p++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int numbers[]={10,20,30,40,50};
//     int *ptr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i] = &numbers[i];
//     }
//     printf("value of numbers array\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("numbers[%d] = %d\n",i,*ptr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int size , i ;
//     printf("enter the number of elements: ");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter %d elements: \n",size);
//     for(i=0 ; i<size;i++){ 
//         scanf("%d",&arr[i]);
//     }
//     printf("you entered : ");
//     for (i = 0 ; i <size; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }       

// #include<stdio.h>
// void merge(int arr[],int left,int mid,int right){
//     int i,j,k;
//     int n1=mid-left+1;
//     int n2=right-mid;
//     int L[n1],R[n2];
//     for(i=0;i<n1;i++){
//         L[i]=arr[left+i];
//     }
//     for(j=0;j<n2;j++){
//         R[j]=arr[mid+1+j];
//     }
//     i=0;
//     j=0;
//     k=left;
//     while(i<n1 && j<n2){
//         if(L[i]<=R[j]){
//             arr[k++]=L[i++];
//         }
//         else{
//             arr[k++]=R[j++];
//         }
//         while(i<n1){
//             arr[k++]=L[i++];
//         }
//         while(j<n2){
//             arr[k++]=R[j++];
//         }
//     }
// }
// void mergesort(int arr[],int left,int right){
//     if(left<right){
//         int mid=left+(right-left)/2;
//         mergesort(arr,left,mid);
//         mergesort(arr,mid+1,right);
//         merge(arr,left,mid,right);
//     }
// }
// int main(){
//     int arr[]={38,27,43,3,9,82,10};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     mergesort(arr,0,n-1);
//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int linearsearch(int arr[],int n,int x){
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n , key;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter %d elements: \n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the element to be searched: ");
//     scanf("%d",&key);
//     int result = linearsearch(arr,n,key);
//     if(result==-1){
//         printf("Element not found\n");
//     }
//     else{
//         printf("Element found at index %d\n",result);
//     }
//     return 0;
// }

