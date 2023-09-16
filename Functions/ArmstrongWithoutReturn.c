// #include<stdio.h>
// int op(int);

// int op(int num){
//     int r,sum=0;
//     while(num!=0){
//         r=num%10;
//         sum+=(r*r*r);
//         num=num/10;
//     }
//     return sum;
// }
// int main(){
//     int a,temp,c;
//     printf("enter a");
//     scanf("%d",&a);
//     temp==a;
//     c=op(a);
    
//     if(temp==c){
//         printf("armstrong no");
//     }
//     else{
//         printf("not armstrong");
//     }

    
// }

#include<stdio.h>
void Arm(int);
int main()
{
    int a,c,temp;
    printf("Enter any Number:\n");
    scanf("%d",&a);
    // temp==a;
    Arm(a);
    
}
void Arm(int x)
{
    int r,sum=0,temp;
    temp==x;
    while(x>0)
    {
    r=x%10;
    sum+=(r*r*r);
    x=x/10;
    }
    printf("Sum=%d",sum);
    if(sum ==temp)
    {
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}
    

