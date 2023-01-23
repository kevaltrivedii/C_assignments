#include<stdio.h>
#include<math.h>

void main(){

    float p,r,t,a,si,ci;  
  
    printf("Enter principle amount = ");
    scanf("%f",&p);

    printf("Enter rate =");
    scanf("%f",&r);

    printf("Enter time=");
    scanf("%f",&t);

    si = (p*r*t)/100;

    printf("\nsimple interest =%0.2f",si);

    a= p*(pow((1+r/100),t));
    ci = a-p;
    printf("\ncompound interest =%0.2f",ci);





}