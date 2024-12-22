#include <stdio.h>
int main(){
    int tab1[5],tab2[5],merg[10],i;
    //store in the table
    for ( i = 0; i < 5; i++){
        printf("enter tab1[%d] :",i);
        scanf("%d",&tab1[i]);
    }
    for ( i = 0; i < 5; i++){
        printf("enter tab2[%d] :",i);
        scanf("%d",&tab2[i]);
    }
    //merge the two tables
    for ( i = 0; i < 10; i++){
        merg[i]=tab1[i];
        merg[5+i]=tab2[i];
    }
    
    printf("the merged table:\n");
    for ( i = 0; i < 10; i++){
        printf("tab[%d] :%d\n",i,merg[i]);
    }
    return 0;
}

