//Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter First String :");
    gets(str1);
    printf("Enter Secound String :");
    gets(str2);
    printf("\n Combine Two Strings Manually:%s",strcat(str1,str2));
}
