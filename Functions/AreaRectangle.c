#include<stdio.h>
void recA(int,int);
int main(){
    int a,b ;
    printf("enter length and breadth:");
    scanf("%d%d",&a,&b);
    recA(a,b);

}

void recA(int l,int m){
     int area;
    
    area=(l*m);
    printf("%d",area);
}