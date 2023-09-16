#include<stdio.h>
int main(){
    int a,b,sub;
    printf("Enter the no");
    scanf("%d %d",&a,&b);

    sub=a+~b+1;

    printf("Substraction is: %d",sub);


}