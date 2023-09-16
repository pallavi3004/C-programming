#include<stdio.h>
int main(){

    int num , r,temp,c,sum=0;
   
    printf("Enter the num:");
    scanf("%d",&num);
    temp=num;
    
    while(num!=0){
        r=num%10;
        c=r*r*r;
        sum=sum+c;
        num=num/10;

    }

    if(temp==sum)
    {
        printf("%d\n is a armstrong no",sum);
    }else 

    printf("%d\n is not a armstrong no",sum);


}