#include<stdio.h>

void main(){

int numbers,sum=0;

    printf("Enter numbers :");
    scanf("%d",&numbers);

    while(numbers!=0){
        sum+= numbers%10;
        numbers=numbers/10;
    }
    printf("sum of digits = %d",sum);
}