#include<stdio.h>
int main(){

    int a,b,i;
    int sum,sub,mul,div;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
    printf("Enter the case");
    scanf("%d",&i);

    switch (i)
    {
        case 1:
            sum=a+b;
            printf("Sum= %d",sum);
            break;


        case 2:
            sub=a-b;
            printf("div= %d",sub);
            break;

        case 3:
            mul=a*b;
            printf("mul= %d",mul);
            break;

        case 4:
            div=a/b;
            printf("div= %d",div);
            break;

        default :
            printf("out of range");

    }


}