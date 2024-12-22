#include <stdio.h>
int main(){
    int tab[5],i,temp;
    //store in the table
    for ( i = 0; i < 5; i++){
        printf("enter tab[%d] :",i);
        scanf("%d",&tab[i]);
    }
    //revers the table
    for ( i = 0; i < 5/2; i++)
    {
        temp=tab[i];
        tab[i]=tab[4-i];
        tab[4-i]=temp;
    }
    printf("reversed table:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("tab[%d]=%d\n",i,tab[i]);
    }
    return 0;
}

