#include<stdio.h>
int main()
{
    char id[10];
    int hour;
    double value, salary;

    printf("Input the employe's id(max 10 number/word) : ");
    scanf("%s",&id);

    printf("Input total worked hour : ");
    scanf("%d",&hour);

    printf("salary per hour : ");
    scanf("%lf",&value);

    salary=value*hour;
    printf("your employe's id no: %s and your working hour %d your salary per hour %lf and your salary is : %.2lf",id,hour,value,salary);




    return 0;
}
