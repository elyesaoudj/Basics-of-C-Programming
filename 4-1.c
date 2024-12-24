#include <stdio.h> 
#include <string.h> 
int main() { 
    char str[100]; 
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
    printf("Length of the string: %lu\n", strlen(str) - 1);

    return 0; 
} 

