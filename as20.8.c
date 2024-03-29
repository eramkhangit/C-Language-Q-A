// Write a program to compute the sum of all elements in an array using pointer.
#include <stdio.h>
void input_array(int *, int);
int  sum_of_array(int *, int);
int main()
{
    int array[5], size;
    printf("enter size of array : ");
    scanf("%d", &size);
        input_array(array, size);
    printf("sum of array : %d ", sum_of_array(array, size));
    return 0;
}

void input_array(int *array, int size)
{
    int i;
    printf("enter arrays elements : ");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

}

int  sum_of_array(int *array, int size)
{
    int i = 0, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
}
return sum ; 
}