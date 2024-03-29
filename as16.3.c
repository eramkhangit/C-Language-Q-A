// write a program in c to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int i, j, trans[10][10]={ 0};
    int a[2][3]={ 1,2,3,4,5,6} ;
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            trans[j][i] = a[i][j];
        }
    }
    printf(" after transpose of matrix :\n");
    for(j=0; j<3; j++)
    {  
        for(i=0; i<2; i++)
        {   
            printf("%d\t",trans[j][i]);
        }
        printf("\n");
    }
}