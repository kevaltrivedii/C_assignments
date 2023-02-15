#include<stdio.h>

void main (){

    int rows,cols,i,j;
    int matrix [100][100];
    int max;

    printf("Enter the numbers of rows :");
    scanf("%d",&rows);

    printf("Enter number of columns :");
    scanf("%d",&cols);

    printf("Enter the matrix :\n");
    for(i=0; i<rows; i++){
        for (j=0; j<cols; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(matrix[i][j]>max){
                max=matrix[i][j];
            }
        }
    }
    printf("Maximum number from matrix is :%d\n",max);
}