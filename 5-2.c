#include <stdio.h> 
#include <stdlib.h> 

int power(int a , int b){
    int p=1;
    for (int i = 1; i <= b; i++)
    {
        p=p*a;
    }
    
    return p;
}
int main() { 
    int a,b;
    printf("enter a and b :");
    scanf("%d %d",&a,&b);
    printf("power is : %d",power(a,b));
    return 0; 
} 

