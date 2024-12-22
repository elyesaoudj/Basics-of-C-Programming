#include <stdio.h>
int main(){
    int n,i,sum;
    printf("enter a number :");
    scanf("%d",&n);
    sum=1;
    for ( i = 1; i <= n; i++)
    {
        sum=sum*i;
    }
    printf("%d!=%d",n,sum);
    return 0;
}

