// #include<stdio.h>
// int main(){
//     int i=0,vowels = 0, consonants = 0;
//     char word[100];
//     scanf("%s",word );
//     while(word[i] != '\0') {
//         char A= word[i];

//     if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U'){
//         vowels++;
//     }
//     else{
//         consonants++;e
//     }
//     i++; 
// }
// printf("Vowels:%d\n",vowels);
// printf("consonants:%d",consonants);

// }


// #include <stdio.h>
// int main(){
//     int n,i,j,temp;
//     scanf("%d",&n);
//     int views[n];
//     for (i = 0; i < n; i++) {
//         scanf("%d", &views[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(views[j]<views[j+1]){
//                 temp = views[j];
//                 views[j] = views[j+1];
//                 views[j+1] = temp;
//             }
//         }
//     }
//     int top = (n <= 5) ? n : 5; 
// for(i = 0; i < top; i++) { 
// printf("%d ", views[i]); 
// } 
//     return 0;
// }


// #include <stdio.h>
// int bubblesort(int arr[100],int n);
// int printArray(int arr[100],int n);
// int main(){
//     int n,arr[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     bubblesort(arr,n);
//     printArray(arr,n);
//     return 0;

// }
// int bubblesort(int arr[100],int n){
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=n-i-1;j++){
//             if(arr[j]<arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int printArray(int arr[100],int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }


// #include <stdio.h>

// int main() {
//     int N, hours, i;
//     static int totalOvertime = 0;  // persists across iterations

//     printf("Enter number of days: ");
//     scanf("%d", &N);

//     for (i = 1; i <= N; i++) {
//         printf("Enter overtime hours for day %d: ", i);
//         scanf("%d", &hours);
//         totalOvertime += hours;
//     }

//     printf("Total Overtime Hours Worked: %d\n", totalOvertime);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,day,i;
//     static int visitors=0;
//     scanf("%d",&n);
//     for(i=1;i<n+1;i++){
//         scanf("%d",&day);
//         visitors += day;
//     }
//     printf("%d\n", visitors);
// }

// #include <stdio.h>
// int main() {
//     int n, i, j;
//     scanf("%d", &n);
//     int products[1000];
//     int count[1000] = {0};
//     int printed[1000] = {0}; 
//     for (i = 0;i<n;i++){
//         scanf("%d", &products[i]);
//     }
//     for (i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(products[i] == products[j]){
//                 count[i]++;
//             }
//         }
//     }
//        for (i = 0; i < n; i++) {
//         int alreadyPrinted = 0;

//         for (j = 0; j < i; j++) {
//             if (products[i] == products[j]) {
//                 alreadyPrinted = 1;
//                 break;
//             }
//         }

//         if (!alreadyPrinted) {
//             printf("%d %d\n", products[i], count[i]);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,j,i,books[100];
//     scanf("%d", &n);
//     for (i=0;i<n;i++){
//         scanf("%d",&books[i]);
//     }
//     for (i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(books[j]<books[j+1]){
//                int temp=books[j];
//                 books[j]=books[j+1];
//                 books[j+1]=temp;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d ", books[i]);
//     }

// }

/*#include <stdio.h>
int main(){
    float temp[7][3], avg[7];
    int i,j;
    float sum;
    int hottest =0,coldest =0;
    int stable =1;
    for (i=0;i<7;i++){
        for(j=0;j<3;j++){
            scanf("%f", &temp[i][j]);
        }
    }
    for(i=0;i<7;i++){
        sum =0;
        for(j=0;j<3;j++){
            sum += temp[i][j];
        }
        avg[i] = sum / 3.0;
        printf()
    }
}
*/

/*#include <stdio.h>
int main(){
    char ch[1000];
    int i, vowels = 0, consonants = 0,symbol=0;
    scanf("%s", ch);
     while(ch[i] != '\0') {
       char A= ch[i];
    if(ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u"||ch=="A"||ch=="E"||ch=="I"||ch=="O"||ch=="U"){
        vowels++;
    }
    else if (ch >='a'&& ch <='z' || ch >='A' && ch <='Z') {
        consonants++;
    }
    else{
        symbol++;
    }
    i++;
}
printf("%d\t%d", vowels, consonants);
    return 0;
}*/

// #include <stdio.h>
// int main(){
//     int a,b,i;
//     int sum =0;
//     scanf("%d %d", &a, &b);
//     for (i = a; i<=b;i++){
//         if ( i % 2 != 0){
//             sum = sum+ i;
//         }
//     }
    
//     printf("%d", sum);
// }


#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);  // Input height of pyramid

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n"); 
    }

    return 0;
}
