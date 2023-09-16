#include<stdio.h>
int add(int x,int y);
int main(){
    int a=20,b=30,c;
    c=add(a,b);
    printf("Addition::%d",c);
}

int add(int x,int y){
return x+y;
}