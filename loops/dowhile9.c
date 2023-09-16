#include<stdio.h>
int main(){
    int i=1,a=0,b=1,n,sum=0;
    printf("Enter the no:");
    scanf("%d",&n);
    
    i=1;
    do{
        
        printf("%d\t",sum);
        sum=a+b;
        a=b;
        b=sum;
        i++;

    }
    while(i<=n);

    printf("%d %d",a,b);
    return 0;

}