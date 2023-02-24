#include<stdio.h>

void fibonacci(int n){
    int i,a=0,b=1,c;

    printf("fibonacci series :");
    for(i=0;i<n;i++){
        printf("%d,",a);
        c=a+b;
        a=b;
        b=c;

    }
}

int main(){

int n;

    printf("Enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
}