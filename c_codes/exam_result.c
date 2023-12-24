#include<stdio.h>

int main() {
    int marks;
    printf("enter the marks of the student: ");
    scanf("%d",&marks);

     
    if(marks<30){
        printf("you got C   ");
    }else if(marks>=30 && marks<=70) {
        printf("congo you got B");
    }else if(marks>=70 && marks<=90) {
        printf("congo you got a");
    }else if(marks>=90 && marks<=100) {
        printf("congo you got A+");
    }else{
        printf("invalid marks ");
    }
   return 0;
}