#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the num");
    scanf("%d%d",&a,&b);
    add(a,b);

}

void add(int x,int y){
    printf("Addition : %d",x+y);
}