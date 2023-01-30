#include<stdio.h>
int main(){

float pie =3.14;
int radius ;

printf("Enter radius of circle : ");
scanf("%d", &radius);

float area = (float) (pie * radius * radius);

printf("The area of circle is %0.2f " , area );

}