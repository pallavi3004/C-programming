#include<stdio.h>
int main(){

    int com , SA ; 
    printf("enter SA value:");
    scanf("%d",&SA);
     
    if(SA>1000){
        com=SA*0.15;
        printf("commision is : %d",com);
    } else 
    printf("sale amount is not greater than 1000");

}