//insert element in array//

#include<stdio.h>

void main(){
    int numbers[5];

    for (int i=0; i<5; i++){
        printf("Enter elements for index number %d: ",i);
        scanf("%d",&numbers[i]);
    }

    printf("\n\n\n");

    for (int i=0; i<5; i++){
        printf ("elements for index number %d is %d\n",i,numbers[i]);
    }
}