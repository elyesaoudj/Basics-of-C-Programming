#include <stdio.h> 
#include <stdlib.h>
int main() { 
    int size;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory alloction failed\n");
        return 1;
    }
    printf("enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    free(arr);
    return 0; 
} 

