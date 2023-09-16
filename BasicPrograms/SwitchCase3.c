#include<stdio.h>
int main(){

    int op,CF,FC,celcius,fahrenheit;
    printf("Enter the operation no");
    scanf("%d",&op);
    

    switch (op){
        case 1:
        printf("Enter fahrenheit value");
        scanf("%d",&fahrenheit);
        CF=(fahrenheit-32)/1.8;
        printf("CF is : %d",CF);
        break;

        case 2:
        printf("Enter celcius value \n");
        scanf("%d",&celcius);
        FC=(1.8*celcius)+32;
        printf("FC is : %d",FC);
        break;

        default:
        printf("out of case");
    }

    




}