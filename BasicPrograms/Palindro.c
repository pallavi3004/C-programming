#include<stdio.h>
int main(){

    int num ,c,r,p=0,temp;
    printf("enter palindrome no");
    scanf("%d",num);
    temp=num;

    while (num!=0){
       r = num%10;
       c=(p*10)+r;
       num=num/10;
    }
    if(c==temp){
        printf("%d\n is a palindrome no",c);
    } else 
        printf("%d\n is not a palindrome no",c);

}