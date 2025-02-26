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

#include <stdio.h>
int main(){
    int i;
    int number;
    scanf("%d",&number);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }
}