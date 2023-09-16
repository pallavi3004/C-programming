#include<stdio.h>
int main(){
    int num;
    printf("enter the num");
    scanf("%d",&num);
    op(num);

}

void op(int);
void op(int x){
   if (x%2==0){
    printf("num is even");
   }else
   printf("num is odd");

}