///find factorial///
#include<stdio.h>

    void main(){

        int i,fact=1,number;

        printf("Enter a positive integer :");
        scanf("%d",&number);
        for(i=1; i<=number; i++){
            fact=fact*i;
        }
        printf("Factorial of %d is %d ",number,fact);
    }
