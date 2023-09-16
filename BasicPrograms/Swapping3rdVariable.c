#include<stdio.h>
main()
{
    int a=9,b=8,t;
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
    return 0;
}