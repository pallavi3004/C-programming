#include<stdio.h>
int main(){

    int arr[5] ,i,j;

    for(i=0;i<5;i++){
        printf("enter array element");
        scanf("%d",&arr[i]);

    }
    int maxValue=0;
        for(i=0;i<5;i++){
            for(j=i+1;j<5;j++){
                 if (arr[i]>arr[j]){
                    maxValue=arr[i];
                 }
                 if (i==4 && maxValue==0)
                 maxValue=arr[i];
            }
        }
       // if(maxValue==0 && i=5)
       // maxValue=arr[4];

            printf("%d\n is greater",maxValue);
        /*
        i=0,j=1,2,3,4;
        if (arr[0]>arr[1] && arr[0]>arr[2] && 
            arr[0]>arr[3] && arr[0]>arr[4]){
            printf("%d\n is greater",arr[0]);


        i=1;j=2,3,4;
        }else if(arr[1]>arr[2] && arr[1]>arr[3] && 
            arr[1]>arr[4]){
                printf("%d\n is greater",arr[1]);
        i=2;j=3,4;
            }else if(arr[2]>arr[3] && arr[2]>arr[4] ){
                printf("%d\n is greater",arr[2]);
        i=3,j=4;
            }else if(arr[3]>arr[4]) {
                printf("%d\n is greater",arr[3]);
            }

            else 
            printf("%d\n is greater",arr[4]);

        */
        
        


        
    


}