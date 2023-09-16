#include<stdio.h>
int main(){

    int Fahrenheit , Celsius;
    printf("enter fahrenheit value");
    scanf("%d",&Fahrenheit);

    Celsius=(Fahrenheit-32)/1.8;

    printf("Celsius = %d",Celsius);


}