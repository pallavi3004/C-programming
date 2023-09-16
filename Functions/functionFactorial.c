#include<stdio.h>
int f1(int);

int main(){
    
    int b,a=3;
   b= f1(a);
    printf("%d",b);
    
}

int f1(int a){
     int f=1;
    for(int i=1;i<=3;i++){
         f=f*i;  
         
    }
    return f;
    
}