#include<stdio.h>
int main(){
    int a,b;
    printf("enter the num");
    scanf("%d%d",&a,&b);
    swap(a,b);

}

void swap(int,int);
void swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
 printf("%d %d",x,y);
}