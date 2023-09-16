#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the num");
    scanf("%d%d%d",&x,&y,&z);
   // op(x,y,z);
    printf("SI is %d",op(x,y,z));
    return 0;

}

int op(int,int,int);

int op(int P,int R,int T){
    int SI;
    SI=(P*R*T)/100;
    return SI;

}