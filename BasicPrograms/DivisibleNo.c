#include<stdio.h>
int main(){

    int num ;
    printf("Enter the num: ");
    scanf("%d",&num);

    if(num%8==0 && num%5==0 ){
        printf("num is divisible by 8 and 5");

    }else 
        if(num%8==0){
            printf("num is divisible by 8");
        } else if(num%5==0){
                printf("num is divisible by 5");
            }
            else 
                if(num%8!=0 && num%5!=0){
                    printf("num is divisible neither by 8 nor 5");
                }
            }
        
    


