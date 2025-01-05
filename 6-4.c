#include <stdio.h> 
void reverseArray(int* arr[] , int size){
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end)
    {
        int temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
    }
}
int main() { 
    int arr[5]={1,2,3,4,5};
    printf("array before reverse :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    reverseArray(arr , 5);
    printf("array after reverse:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0; 
} 

