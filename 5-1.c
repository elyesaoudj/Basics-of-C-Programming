#include <stdio.h> 
#include <stdlib.h> 

int gcd(int a , int b){
    while (b != 0)
    {
        int temp;
        temp=b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() { 
    int a,b;
    printf("enter a and b :");
    scanf("%d %d",&a,&b);
    printf("gcd is : %d",gcd(a,b));
    return 0; 
} 

