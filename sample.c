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
#include <stdio.h>
#include <stdbool.h>
int main() {
    int myge;
    scanf("%d", &myge);
    int voteage = 18;
    printf("%d", myge>=voteage);
    return 0;
}
