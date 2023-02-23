#include<stdio.h>
#include<string.h> 

void copy_string(char source[] ,char dest[]){
    int i=0;
    while (source[i]!='\0'){
        dest[i]=source[i];
        i++;

    }
    dest[i]='\0';

}
void main(){
char source_str[100], dest_str[100];
printf("Enter a string :");
fgets(source_str,100,stdin);
copy_string(source_str,dest_str);
printf("copied string :%s\n",dest_str);

}
    