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
    if (b == 0)
    {
        printf("You can not divide by zero.");
        exit(1);
    }
    return a/b;
}
void EnterTwoNumbers(double *a, double *b)
{
    printf("Please enter two numbers: \n");
    scanf("%lf", a);
    scanf("%lf", b);
}
int main()
{
    char choice;
    double num1, num2;
    printf("Welcome to the simple calculator!");
    int usage = 1;
    while(usage == 1)
    {
        printf("\nPlease enter what operation would you like to use: \n 1)+     2)-  \n 3)*     4)/ \n");
        scanf(" %c", &choice);
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
        printf("\nWould you like to continue using the calculator?(1/0): ");
        scanf("%d", &usage);
        getchar();
    }
    printf("\nThank you for using my simple calculator!\n");
    return 0;
}
