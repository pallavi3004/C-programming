#include<stdio.h>
int main(){


    int n , dl;//rev;
    
    printf("enter the no:");
    scanf("%d",&n);

    while(n>0){
        dl=n%10;
        n=n/10;
        //rev=dl;
         printf("%d",dl);
    }

   


}