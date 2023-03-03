#include<stdio.h>

struct employee {
    int empnum;
    char firstname[50];
    char lastname[50];
    char address [100];
    int age;
};

int main()
{
    struct employee emp[5];
    int i;

    for (i=0;i<5; i++){
        printf("\nEmployee %d details : \n",i+1);
        printf("Employee number :");
        scanf("%d",&emp[i].empnum);
        printf("first name : ");
        scanf("%s",&emp[i].firstname);
        printf("Enter last name : ");
        scanf("%s",&emp[i].lastname);
        printf("Enter Address :");
        scanf("%s",&emp[i].address);
        printf("Enter age :");
        scanf("%d",&emp[i].age);

    }
    printf("\nEmployees information :-\n");
    for(i=0; i<5; i++){
        printf("\nEmployee %d :\n",i+1);
        printf("Employee number : %d\n",emp[i].empnum);
        printf("Full name : %s %s\n",emp[i].firstname,emp[i].lastname);
        printf("Address : i%s\n",emp[i].address);
        printf("Age : %d\n",emp[i].age);

    }
}