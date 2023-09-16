#include<stdio.h>
int main(){

    char i,j,k;
    for(i='A';i<='I';i++){
        for(k='I';k>=i;k--){
            printf(" ");
        }
        
        for(j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }



}