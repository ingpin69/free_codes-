#include<stdio.h>
#include<string.h>
struct class{
    int marks;
    int roll_number;
    char name[20];
};
void main(){
    struct class student_1,student_2;
    student_1.roll_number=12;
    strcpy(student_1.name,"debapriya mukherjee");
    student_1.marks=95;

    student_2=student_1;
    if (student_1.roll_number==student_2.roll_number && strcmp(student_1.name,student_2.name)==0 && student_1.marks==student_2.marks)
    {
        printf("the students are equeal");
    }else{
        printf("the number is not equeal");
    }
    

}
