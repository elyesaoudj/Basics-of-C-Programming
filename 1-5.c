#include <stdio.h>

int main(){
    int a,b;
    printf("enter a number :");
    scanf("%d",&a );
    if (a % 2 == 0 )
    {
       printf("the given number is even"); 
    }else{
        printf("the given number is odd");
    }
    return 0;
}
