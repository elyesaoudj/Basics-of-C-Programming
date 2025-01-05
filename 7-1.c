#include <stdio.h> 
struct Student{
    char name[50];
    int RollNumber;
    float marks;
};

int main() { 
    struct Student student;
    printf("enter student name:");
    fgets(student.name , sizeof(student.name) , stdin);
    printf("enter roll number:");
    scanf("%d",&student.RollNumber);
    printf("enter student marks");
    scanf("%f",&student.marks);
    printf("\n");
    printf("Name: %s",student.name);
    printf("Roll number : %d \n",student.RollNumber);
    printf("marks:%.2f ",student.marks);
    return 0; 
} 

