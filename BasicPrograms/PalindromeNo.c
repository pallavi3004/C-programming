#include<stdio.h>
int main(){

    int num,c,r,s=0;
    printf("Enter num");
    scanf("%d",&num);   //1221
    c=num;
    
    while(num>0){
        r=num%10;    //1 
        s=r+(s*10);   //1
        num=num/10;   //122
    }
        if(c==s){
            printf("No Is Palindrome No");
        }
        else
            printf("No is not Palindrome No");

return 0;
}