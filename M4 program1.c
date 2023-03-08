
#include<stdio.h>
int main(){

    char file_name[100],c;
    FILE* fp;

    printf("Enter name of a file you want to read : ");
    scanf("%s",file_name);

    fp=fopen(file_name,"r");

    if(fp==NULL){
        printf("cannot open file.\n");
        return 1;

    }while((c=fgetc(fp))!=EOF){
        printf("%c",c);

    }
    fclose(fp);


    
}