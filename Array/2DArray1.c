#include<stdio.h>
int main(){

    int i ,j , a[2][2];
    printf("Enter the elements");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }





}