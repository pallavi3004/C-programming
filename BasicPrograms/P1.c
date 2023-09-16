#include<stdio.h>
int main(){

    int num,r,p=0,temp;
    printf("enter one no");
    scanf("%d",&num);
    temp=num;

    while(num!=0){

        r=num%10;
        p=(p*10)+r;
        num=num/10;

    }

    if(p==temp){
        printf("%d  is a palindrome no",p);
    }else 
        printf("%d is not a palindrome no",p);

        return 0;

}