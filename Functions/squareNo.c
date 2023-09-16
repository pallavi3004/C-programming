#include<stdio.h>
int main(){
    int a;
    printf("Enter the num");
    scanf("%d",&a);
    Squ(a);
}

void Squ(int);

void Squ(int x){
    int c;
    c=x*x;
    printf("%d",c);
}