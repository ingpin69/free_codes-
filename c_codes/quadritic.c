/*#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    float x_1,x_2,root,d;
    printf("write the 1st root ");
    scanf("%d",&a);
    printf("write the 2nd root ");
    scanf("%d",&b);
    printf("write the 3rd root ");
    scanf("%d",&c);
    d=b*b-4*a*c;
    root=sqrtf(d);
    x_1=(b+root)/2*a;
    x_2=(-b-root)/2*a;
    printf("the roots are %f and %f \n",x_1,x_2);
}*/

//a bike ran at a speed of 80km/hr during 1st 10 kilometres 
//the same bike ran at a speed of 120 km/hr for the next 30 kms find the average speed pf the bike  
/*#include<stdio.h>
//void main(){
    float time_1,time_2,total_time,the_average_speed,total_distance,d1,d2,s1,s2;
    printf("enter the distance and speed  of 1st ride ");
    scanf("%f%f", &d1,&s1);
    printf("enter the distance of 2st ride ");
    scanf("%f%f", &d2,&s2);
    time_1=d1/s1;
    time_2=d2/s2;
    total_time=time_1+time_2;
    total_distance=d1+d2;
    the_average_speed=total_distance/total_time;
    printf("the average speed is %f", the_average_speed);
}*/

// area of triangle using heron's formulae
/*#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,s,the_area;
    printf("write the 1st side ");
    scanf("%f",&a);
    printf("write the 2nd side ");
    scanf("%f",&b);
    printf("write the 3rd side ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    the_area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of the triangle is %f ", the_area);
}
/*
#include<stdio.h>
void main(){
    float basic_salary, DA, TA, HR,increment, total_salary,new_salary, new_salary;
    printf("write the basic salary ");
    scanf("%f",&basic_salary);
    TA1=0.1 * basic_salary;
    DA1=0.4 * basic_salary;
    HR1=0.2 * basic_salary;
    total_salary= basic_salary+DA1+TA1+HR1;
    printf("total_salary_ is %f ",total_salary);
    new_salary= basic_salary*0.2;
    TA1=0.1 * new_salary;
    DA1=0.4 * new_salary;
    HR1=0.2 * new_salary;
    
}*/

#include<stdio.h>
void main(){
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j;
    l=j/i*i;
    a=i/j*j;
    b=j/i*i;
    printf("%d%d%d%d",k,l,a,b);
}