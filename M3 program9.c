#include<stdio.h>

void main(){


    printf("----Find largest number from array----\n\n");

    int num[10];
    int max;
    
    
     for(int i=1; i<10; i++){

    printf("Enter 10 numbers %d :",i);
    
    scanf("%d",&num[i]);
        if(num[i]>max){
            max=num[i];
        }
    }
     printf("maximum number is : %d \n",max);
}