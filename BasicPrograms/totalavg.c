#include<stdio.h>
int main()
{
    int mar,eng,phy,chem,bio;
    int total,avg;

    printf("Enter student marks:");
    scanf("%d%d%d%d%d",&mar,&eng,&phy,&chem,&bio);

    total=mar+eng+phy+chem+bio;
    avg=total/5;
    
    printf("total = %d\n",total);
    printf("avg = %d",avg);

}