// Write a program to print the elements of an array in reverse order.
#include <stdio.h>
void reverse_array(int *, int);
int main()
{
    int array[5], i, size;
    printf("enter size of array :");
    scanf("%d", &size);
    printf("enter array elements :");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    reverse_array(array, size);
    return 0;
}
void reverse_array(int *arr, int size)
{
    printf("reversed array is:");
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}