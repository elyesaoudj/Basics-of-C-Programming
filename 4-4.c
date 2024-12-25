#include <stdio.h> 
#include <ctype.h> 

int main() { 
    char str[100]; 
    int volwels = 0,  constonants =0;

    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
    
    for(int i = 0 ; str[i] != '\0' ; i++){
        if (isalpha(str[i]))
        {
            char ch = tolower(str[i]);
            if (ch =='a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u')
            {
                volwels++;
            }else{
                constonants++;
            }   
        }
    }
    printf("volwels : %d constonants : %d \n",volwels,constonants);
    return 0; 
} 

