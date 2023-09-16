#include<stdio.h>
int main(){

    int num , sum=0 ,r;
    printf("Enter the num");
    scanf("%d",&num);

    while(num!=0){
        r=num%10;
        sum=r+sum;
        num=num/10;
        
    }
    printf("%d",sum);

}