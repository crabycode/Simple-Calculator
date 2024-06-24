#include <stdio.h>
#include <stdlib.h>

double Addition(double a, double b)
{
    return a+b;
}
double Subtraction(double a, double b)
{
    return a-b;
}
double Multiplication(double a, double b)
{
    return a*b;
}
double Division(double a, double b)
{
    return a/b;
}
void EnterTwoNumbers(double *a, double *b)
{
    printf("Please enter two numbers: \n");
    scanf("%lf %lf", a, b);
}
int main()
{
    char choice;
    double num1, num2;
    printf("Welcome to the simple calculator!");
    printf("Please enter what operation would you like to use: \n 1)+     2)-  \n 3)*     4)/ \n");
    scanf("%c", &choice);
    switch(choice)
    {
    case '+':
        EnterTwoNumbers(&num1, &num2);
        printf("Their sum is %lf", Addition(num1,num2));
        break;
    case '-':
        EnterTwoNumbers(&num1, &num2);
        printf("Their difference is %lf", Subtraction(num1,num2));
        break;
    case '*':
        EnterTwoNumbers(&num1, &num2);
        printf("Their multiplication is %lf", Multiplication(num1,num2));
        break;
    case '/':
        EnterTwoNumbers(&num1, &num2);
        printf("Their division is %lf", Division(num1,num2));
        break;
    default:
        printf("There is no such operator.\n");
    }
    return 0;
}
