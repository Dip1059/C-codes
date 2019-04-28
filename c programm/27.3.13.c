#include<stdio.h>
int main()
{
    double num1,num2,value;
    char sign;
    e:
    printf("please enter a number : ");
    scanf("%lf",&num1);
    printf("enter another number : ");
    scanf("%lf",&num2);
    value=num1+num2;
    sign='+';
    printf("SUM=%lf%c%lf=%lf\n",num1,sign,num2,value);
    value=num1-num2;
    sign='-';
    printf("SUB=%lf%c%lf=%lf\n",num1,sign,num2,value);
    value=num1/num2;
    sign='/';
    printf("DIV=%lf%c%lf=%lf\n",num1,sign,num2,value);
    value=num1*num2;
    sign='*';
    printf("MULTI=%lf%c%lf=%lf\n\n",num1,sign,num2,value);
    goto e;
    return 0;
}
