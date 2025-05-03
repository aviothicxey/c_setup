#include<stdio.h>
int main(){
    int array[10];
    int positive =0 ;
    int negative =0 ;
    printf("Enter 10 numbers: ");
    for(int i = 0;i < 10;i++){
        scanf("%d",&array[i]);
        if(array[i]> 0){
            printf("positive\t");
        }
        else if (array[i]<0){
            printf("neagtive\t");
        }
        else{
            printf("Zero\t");
        }
    }
}

#include<stdio.h>
int main(){
    int array[10];
    int positive =0 ;
    int negative =0 ;
    printf("Enter 10 numbers: ");
    for(int i = 0;i < 10;i++){
        scanf("%d",&array[i]);
        if(array[i]> 0){
            positive++;
        }
        else if (array[i]<0){
            negative++;
        }
        
    }
    printf("positive count : %d\n",positive);
printf("negative count : %d",negative);
    return 0;
}