#include <stdio.h> 
int stringlength(char* str){
    int lenght=0;
    while (*str != '\0')
    {
        lenght++;
        str++;
    }
    return lenght;
}
void removenewline(char* str){
    int i;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}
int main() { 
    char str[100];
    printf("enter a string :");
    fgets(str ,sizeof(str), stdin);
    removenewline(str);
    printf("length of the stiring: %d\n", stringlength(str));
    return 0; 
} 

