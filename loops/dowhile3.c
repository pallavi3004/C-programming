#include<stdio.h>
int main(){

    int i=2 ,a;
    do{

        if(i%2==0){
            printf("%d\n even:",i);
        }
        else 
        printf("odd");
         i++;
    }
    while(i<=10);
    return 0;


}