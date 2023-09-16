#include<stdio.h>
int main(){

    int orderQuantity,stockQuantity;
    char creditStatus;

    printf("Enter customer order quantity: ");
    scanf("%d",&orderQuantity);

    printf("Enter stockQuantity");
    scanf("%d",&stockQuantity);

    getchar();

    printf("customer's credit OK? (Y/N): ");
    scanf("%c",&creditStatus);

    if(orderQuantity <= stockQuantity){
        if(creditStatus == 'Y' || creditStatus == 'y'){
            printf("orderprocessed: supply %d items.\n",orderQuantity);

        }
            else {
                printf("Order on hold:customer credit is not ok.intimation sent.\n");
            } 

        
    }
    else {
        printf("insufficient stock : order not supplied. send intimation.\n");
    }
    return 0;
}