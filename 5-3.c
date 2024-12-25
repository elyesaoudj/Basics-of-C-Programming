#include <stdio.h> 

int factorial(int a ){
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return  a * factorial (a - 1);
}
int main() { 
    int a;
    printf("enter a :");
    scanf("%d",&a);
    printf("factorial is : %d",factorial(a));
    return 0; 
} 

