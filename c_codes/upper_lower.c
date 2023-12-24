#include<stdio.h>
int main(){
    char character;
    printf("enter the chatacter : ");
    scanf("%c", &character);

    if (character>='A' && character<='Z'){
        printf("it is uppercase");
    }else if (character>='a' && character<='z') {
        printf("it is lowercase");
    }else if (character >= '0' && character <= '9') {
        printf("It is a number");
    }else {
        printf("it is special character ");
    }
   return 0;
}