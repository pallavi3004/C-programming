#include<stdio.h>
int main(){

//NESTED IF 


    int a,b,c,d,e;
    printf("Enter the values");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    printf("a is greater");
                }
            }
        }
    } else {
        if(b>c){
            if(b>d){
                if(b>e){
                    printf("b is greaer");
                }
            }
        } else {
        if(c>d){
            if(c>e){
                printf("c is greater");
            }
        } else {
            printf("d is greater");
        }
    } 
    }
    


}