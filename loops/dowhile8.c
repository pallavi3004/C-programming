#include<stdio.h>
int main(){

    int r,n,temp,PN=0;
    printf("enter the no");
    scanf("%d",&n);
     temp=n;

    do {
        r=n%10;
        PN=(PN*10)+r;
        n=n/10;

    }
    while(n!=0);

        if(PN==temp){
            printf("%d is a palindrome no",PN);
        }
        else 
        printf("not a palindrome no");

}