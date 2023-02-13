//sort the array//
#include<stdio.h>

void main(){

    int arr[50];
    int i,j,a,n;

    printf("Enter the number of elemets for array :");
    scanf("%d",&n);

    printf("Enter the elements :\n");

    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
                                        
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                a=arr[i];
                arr[i]=arr[j];
                a=arr[j];
            }
        }
    }  
    printf("Numbers in ascending order is :\n");
    for(i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}