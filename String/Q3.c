//. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter The String :");
    scanf("%s",&str);
    printf("The String Is Revrse Order :%s",strrev(str));
}
