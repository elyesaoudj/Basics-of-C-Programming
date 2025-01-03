#include <stdio.h> 

int main() { 
    int arr[] = {10,25,33,14,51};
    int* ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d element : %d\n",i+1,*ptr);
        ptr++;
    }
    return 0; 
} 

