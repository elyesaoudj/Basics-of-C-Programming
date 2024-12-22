#include <stdio.h>
int main(){
    int tab[5];
    int n,i;
    //store in the table
    for ( i = 0; i < 5; i++)
    {
        printf("enter tab[%d] :",i);
        scanf("%d",&tab[i]);
    }
    //print the table
    printf("the table:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("enter tab[%d]=%d\n",i,tab[i]);
    }
    return 0;
}

