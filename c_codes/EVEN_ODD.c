#include <stdio.h>
void main()
{
          int number , range ;
          printf("enter the range of numbers ");
          scanf("%d",&range);
          printf("the even numbers in the range are :\n");
          for(number=1;number<=range;number++){
              if(number%2==0){
                  printf("%d\n",number);
              }
          }
          printf("the odd numbers in the range are :\n");
            for(number=1;number<=range;number++){
              if( number%2!=0){
                  printf("%d\n",number);
        }
    }
}