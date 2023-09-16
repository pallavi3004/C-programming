#include<stdio.h>
int main(){
    int num;
    printf("enter the num");
    scanf("%d",&num);
    op(num);
}

void op(int);
void op(int x){
    int sum=0,r,c;
    int temp=x;
    while(x!=0){
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    if(temp==sum){
        printf("number is palindrome no");
    }else 
    printf("number is not palindrome no");
    
}