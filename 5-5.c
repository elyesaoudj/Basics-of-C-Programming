#include <stdio.h> 

int sumOfDigit(int a ){
    int s=0;
    while (a != 0)
    {
        s+=a%10;
        a/=10;
    }
    return  s;
}
int main() { 
    int a;
    printf("enter a :");
    scanf("%d",&a);
    printf("the sum of digit %d is %d",a,sumOfDigit(a));
    return 0; 
} 

