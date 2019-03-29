/* Write a program to display the values on the diagonal of its 10 X 10 matrix parameter. */

#include <stdio.h>

 
int main(){
    int matrix[10][10];
    int i,j;
     
    for(i=0;i< 10;i++){
        for(j=0;j< 10;j++)
        {
			matrix[i][j]=i+j+2;
        }
    }
 

    for(i=0;i< 10;i++){
        for(j=0;j< 10;j++)
        {
            if(i==j)
                printf("%d\t",matrix[j][i]);
            else
                printf("0\t");
        }
        printf("\n");
    }
    return 0;   
}

