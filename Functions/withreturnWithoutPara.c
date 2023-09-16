#include<stdio.h>

    int add(void){
        int a,b,c;
        a=10,b=40;
        c=a+b;
        return c;
    }

int main(){

    int ans;
    ans=add();
    printf("%d",ans);

}