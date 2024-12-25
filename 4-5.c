#include <stdio.h> 
#include <stdlib.h> 

int main() { 
    char str[100],ch; 
    int counts = 0;

    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
    printf("enter the character you wont fond :");
    scanf("%c",&ch);
    for(int i = 0 ; str[i] != '\0' ; i++){
            if (ch == str[i])
            {
                counts++;
            }  
        }
    printf("the character  '%c' appears %d \n",ch,counts);
    return 0; 
} 

