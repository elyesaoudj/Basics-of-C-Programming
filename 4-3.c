#include <stdio.h> 
#include <string.h> 
int ispalindrome(char str[]){
    int start = 0 , end = strlen(str) - 1;

    while (start < end){
        if (str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() { 
    char str[100]; 

    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0'; //remove the newline character from the string
    if (ispalindrome(str)){
        printf("this string is palindrome");
    }else{
        printf("this string is not palindrome");
    } 
    return 0; 
} 

