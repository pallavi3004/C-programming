#include<stdio.h>
int main(){

    int a , b,add,sub,mul,div,mod;
    printf("Enter values");
    scanf("%d %d",&a, &b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("Addition= %d\n",add);
    printf("Subtraction= %d\n",sub);
    printf("Multiplication= %d\n",mul);
    printf("division= %d\n",div);
    printf("Modulus= %d\n",mod);


}