#include <stdio.h> 
#include <string.h> 
void concat(char* str1 , char* str2){
    while (*str1) str1++;
    while (*str2)
    {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1= '\0';
}
void remove_newline(char* str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
int main() { 
    char str1[100],str2[50]; 
    printf("Enter first string: "); 
    fgets(str1, sizeof(str1), stdin); 
    remove_newline(str1);

    printf("enter second string:");
    fgets(str2,sizeof(str2),stdin);
    remove_newline(str2);
    
    concat(str1,str2);
    printf("concat stirng is : %s \n ",str1);
    return 0; 
} 

