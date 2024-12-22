#include <stdio.h>
int main(){
    int tab[5],i,sum;
    float average;
    //store in the table
    for ( i = 0; i < 5; i++){
        printf("enter tab[%d] :",i);
        scanf("%d",&tab[i]);
    }
    sum=0;
    for ( i = 0; i < 5; i++){
       sum+=tab[i];
    }  

    average=sum/5;

    printf("the sum is : %d\n",sum);
    printf("the average is :%.2f",average);

    return 0;
}

