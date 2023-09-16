#include<stdio.h>
int main(){

    int r,n,Arm=0,temp;
   
    printf("Enter the no :");
    scanf("%d",&n);
     temp=n;

    do{
        r=n%10;
        Arm=Arm+(r*r*r);
        n=n/10;
    }
    while(n!=0);

     if(Arm==temp){
            printf(" %d is a armstrong no",Arm);
        }else 
            printf(" is not a armstrong no");


}