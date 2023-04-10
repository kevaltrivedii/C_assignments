// Module 4 Q-1 Write a program to read data from file.

//read data from files//
#include<stdio.h>
int main(){
     FILE *fp;
     char buffer [50];

     fp=fopen("read_file.txt","w");//opened file
     fprintf(fp,"Hello there!!");//something to write in file 

     fclose(fp);//file closed

     fp=fopen("read_file.txt","r");//reopen file to read
     while(fgets(buffer,50,fp)){//while loop for reading data from the given file
        printf("%s",buffer);
     }
     fclose(fp);



}