//program to impliment strlen() function using c
#include<stdio.h>
#include<string.h>

void main(){
char s[40];
int l;
printf("Enter any string:");
scanf("%s",&s);
l = strlen(s);
printf("The Length of string is %d",l);
}