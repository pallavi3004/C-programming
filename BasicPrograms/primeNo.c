#include<stdio.h>
int main(){

    int a ,c=0, i=2 ;
    printf("Enter the no");
    scanf("%d",&a);

    while(i<=a){
        if(a%i==0){
            c++;
        }
         i++;   
    }
    if(c==1)     
            printf("%d is a prime no",a);
    else
        printf("%d is not a prime no",a);
    
}