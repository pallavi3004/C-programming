#include<stdio.h>
int main(){

    int num ,firstdigit ,lastdigit,sum;
    printf("Enter the num");
    scanf("%d",&num);
    
    lastdigit=num%10;

    while(num>=10){
        num=num/10;

    }

    firstdigit=num;

    sum=firstdigit+lastdigit;

    printf("sum is: %d",sum);


}