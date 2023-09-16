#include<stdio.h>

    int num(int);
    int num(int a){
       
        for(int i=2;i<=a-1;i++){
            if(a%i==0){
                return 0;
            }
            return 1;
        }
       
    }

int main()
{
        int n,result;
        printf("enter the no");
        scanf("%d",&n);

        result = num(n);
         if(result==1)
            printf("%d is a prime no.\n",n);
        
            else 
            printf("%d is not a prime no.\n",n);
            return 0;

}