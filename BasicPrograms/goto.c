#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a,&b);

    c=a+b;
    printf("%d\n",c);
    goto   jump;
    c=a-b;
    jump:
    c=a/b;

    printf("%d",c);


}