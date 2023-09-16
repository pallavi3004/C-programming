#include<stdio.h>
int main(){
    int num,a;
    printf("enter the num");
    scanf("%d",&num);
    a=op(num);
    printf("reverse no is : %d",a);

}

int op(int);
int op(int x){
    int r,sum=0;
while(x!=0){
    
    r=x%10;
    sum=(sum*10+r);
    x=x/10;
  
}
return sum;

}