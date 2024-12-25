#include <stdio.h> 

int isprime(int a ){
    for (int i = 2; i*i < a; i++)
    {
        if (a % i ==0)
        {
            return 0;
        }
    }
    
    return 1 ;
}
int main() { 
    int a;
    printf("enter a :");
    scanf("%d",&a);
    if (isprime(a))
    {
        printf("the number %d is prime",a);
    }else{
        printf("the number %d is not prime",a);
    }
    return 0; 
} 

