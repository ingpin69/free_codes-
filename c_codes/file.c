#include<stdio.h>
void main(){
FILE *fp;
char str[] = "Hello, world!";

fp = fopen("myfile.txt", "w");
fputs(str, fp);
fclose(fp);
}