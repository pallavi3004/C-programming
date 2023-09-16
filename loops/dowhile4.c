#include<stdio.h>
int main(){

    int i=1,fact=1,n;
    printf("\n Enter a no: ");
    scanf("%d",&n);
    do{
        fact=fact*i;
        i++;
    }
    while(i<=n);
printf(" Factorial of a %d is %d\n",n,fact);

}