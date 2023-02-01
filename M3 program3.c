#include<stdio.h>

void main(){

    int eng,math,sci,chem,hindi;
    float per , total;

    printf("Enter marks of five subjects :");
    scanf("%d%d%d%d%d",&eng,&math,&sci,&chem,&hindi);

    total = eng + math + sci + chem + hindi ;

    printf("Total : %0.2f\n",total);

    per = (total/500)*100; 

    printf("percentage = %0.2f\n",per);


 if(per > 75){
 printf("Distinction!");
 }

 else if(per > 60 && per<= 75){
 printf("First class!");
 }
 else if(per > 50 && per <= 60){
 printf("Second class!");
 }
 else if(per > 35 && per <= 50){
 printf("Pass class");
 }
 else{
    printf("Fail");
 }
 
 

}
