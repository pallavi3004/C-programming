#include<stdio.h>
int main(){

    float DA , HRA ,PF,TA ,basicSalary,grossSalary,netSalary;
    printf("Enter BasicSallary");
    scanf("%f",&basicSalary);
    
    DA=0.40*basicSalary;
    HRA=0.25*basicSalary;
    PF=0.20*basicSalary;
    TA=0.30*basicSalary;

    grossSalary=(HRA+DA+TA+basicSalary);
    netSalary=(grossSalary-PF);

    printf("grossSallary: %0.2f\n",grossSalary);
    printf("netSallary: %0.2f",netSalary);



}