#include<stdio.h>
int main(){

    int n ,dl  ,sum=0 ;
    printf("enter the values of n ");
    scanf("%d",&n);

    while(n>0){                                               //(d1=n%10;n=n/10 // without using loop

        dl=n%10;
        n=n/10;
        sum=dl+sum;

    }
    printf("sum of digit: %d",sum);

}