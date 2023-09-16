#include<stdio.h>
int main(){

    int sum=0,i,j,a[3][3]={1,2,3,4,5,6,7,8,9};

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(((i==2)||(j==2)||(i+j==0))&&((i!=1)&&(j!=1))){
                //((i+j==0)||(i+j==2)||(i+j==4))&&(i!=1)
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum= %d",sum);

}