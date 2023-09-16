#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
  
    printf("enter first string:");
    gets(a);
    printf("enter second string");
    gets(b);
    printf("value of strcmp=%d",strcmp(a,b));
}