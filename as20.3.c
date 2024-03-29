// write a function to sort an array of int type values.
#include <stdio.h>
void sort_array(int *, int);
void input_array(int *, int);
int main()
{
    int i, a[5];
    input_array(a, 5);
    sort_array(a, 5);
    for (i = 0; i < 5; i++)
        printf("%d", a[i]);
    return 0;
}
void input_array(int *array, int size)
{
    int i;
    printf("enter arrays: ");
    for (i = 0; i < size; i++)
        scanf("%d", (array + i));
}
void sort_array(int *array, int size)
{
    int i, j, swap = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size ; j++)
        {
            if (array[i] > array[j]) // if( *(array+i) > *(array+1+i))
            {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    } 
}