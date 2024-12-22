#include <stdio.h>

int main(){
    int a,b;
    printf("enter a :");
    scanf("%d",&a );
    printf("enter b :");
    scanf("%d",&b );
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after sawpping : a=%d b=%d ",a,b);
    return 0;
}
