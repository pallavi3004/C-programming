    #include<stdio.h>
    int main(){

        int op, num1 , num2 , add ,sub ,div,mul;
        printf("enter the op");
        scanf("%d",&op);
        printf("Enter the values of num1 and num2");
        scanf("%d %d",&num1 ,&num2);
        

        switch (op){

            case 1:
            
            add=num1+num2;
            printf("add= %d",add);
            break;

            case 2:
            sub=num1-num2;
            printf("sub= %d",sub);
            break;

            case 3:
            mul=num1*num2;
            printf("mul= %d",mul);
            break;


            case 4:
            div=num1/num2;
            printf("div= %d",div);
            break;

            default:
            printf("out of range");

        }




    }