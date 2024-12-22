#include <stdio.h>
int main(){
    int tab[5];
    int i,max,min;
    //store in the table
    for ( i = 0; i < 5; i++)
    {
        printf("enter tab[%d] :",i);
        scanf("%d",&tab[i]);
    }
    //find the largest and smallest number
    min=max=tab[0];
    for ( i = 1; i <= 5; i++)
    {
        if (tab[i]>max)
        {
            max=tab[i];
        } 
        if (tab[i]<min)
        {
            min=tab[i];
        } 
    }  
    printf("the largest number is : %d\n",max);
    printf("the smallest number is :%d",min);

    return 0;
}

