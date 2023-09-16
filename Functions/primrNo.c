#include<stdio.h>
int main(){
    int num,p;
    printf("enter the num");
    scanf("%d",&num);
    p=op(num);
    if(p==0){
        printf("this is a prime no");
    }else 
        printf("not a prime no");
   

}

int op(int);
int op(int x){
    int count=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            count++;
        }
    }
    return count;


}