#include<stdio.h>

int main(){
   int a1[5]={1,2,3,4,5} , a2[5]={10,20,30,40,50} ,a3[5],i,j;
    for( i=0;i<5;i++){
        printf("%d\n",a1[i]);
    }

    for( j=0;j<5;j++){
        printf("%d\n",a2[j]);
    }
    i=0,j=0;
    printf("\n array after addition \n");
    for(int k=0;k<5;k++,i++,j++){
        a3[k]=a1[i]+a2[j];
      //int add=a1[i]+a2[i];
        printf("%d\n",a3[k]);

    }

}