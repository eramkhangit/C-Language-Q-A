// write a function in C to merge two arrays of the  same size sorted in decreasing order 
#include<stdio.h>
void  merge_array(int x[],int m, int y[],int n,  int z[]);
int main()
{   int a[4] ={ 3 ,4,7,0} ;
    int b[4] ={ 5,1,2,10};
    int c[8];
    merge_array(a ,4 ,b ,4 ,c);
    return 0;
}
void merge_array(int x[], int m, int y[],int n, int z[])
{
    int i, k =0,sort =0 ; 
    for(i=0 ; i<m; i++)  
       {
         z[k] =x[i]; 
         k++;
       }
    for(i=0; i<n; i++)
       {
        z[k] =y[i];
        k++;
       }
        printf(" coppied elements are :");
        for(k=0; k<m+n; k++)
        printf("%d ",z[k]); 
        for(k=0; k<m+n; k++)
        {   for(i=k+1; i<m+n; i++)
          {
            if(z[k] < z[i] )
           { sort = z[i] ;
             z[i] =z[k] ;
            z[k] = sort;
           }
          }
        }
        printf("\n sorted elements are :");
        for(k=0; k<m+n; k++)
        printf("%d ",z[k]);
 }