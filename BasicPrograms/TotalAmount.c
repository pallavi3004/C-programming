#include<stdio.h>
int main(){

    int totalAmount , Pa,discount=200;
        
        printf("Enter Pa :");
        scanf("%d",&Pa);


        if(Pa>1500){
            totalAmount=Pa-discount;
            printf("totalAmount with discount :%d",totalAmount);
        }
        else 
        { totalAmount=Pa;
        printf("total amount %d",Pa);

        }

    return 0;
}