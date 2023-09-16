#include<stdio.h>
int main(){

int i=1 , n , r , sum=0;
printf("enter the no");
scanf("%d",&n);

do{
    r=n%10;
    sum=sum+r;
    n=n/10;
    i++;

}
while(i<=n);
printf("sum of digit: %d",sum);


}