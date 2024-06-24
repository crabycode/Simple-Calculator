#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

double LogarithmicValues(double a, double b)
{
    if (a <= 0 || b <= 0)
    {
        printf("Logarithm base and value must be positive.\n");
        exit(1);
    }
    return log(a)/log(b);
}

double SquareRoot(double a)
{
    if (a < 0)
    {
        printf("Number must be positive\n");
        exit(1);
    }
    return sqrt(a);
}

void EnterTwoNumbers(double *a, double *b)
{
    printf("Please enter two numbers: \n");
    scanf("%lf", a);
    scanf("%lf", b);
}

int main()
{
    char choice[10];
    double num1, num2;
    printf("Welcome to the simple calculator!\n");
    int usage = 1;
    while (usage == 1)
    {
        printf("\nPlease enter what operation would you like to use: \n 1)+     2)-  \n 3)*     4)/ \n 5)log   6)square\n");
        scanf("%s", choice);
        getchar();
        if (strcmp(choice, "+") == 0 || strcmp(choice, "1") == 0)
        {
            EnterTwoNumbers(&num1, &num2);
            printf("Their sum is %lf", Addition(num1,num2));
        }
        else if (strcmp(choice, "-") == 0 || strcmp(choice, "2") == 0)
        {
            EnterTwoNumbers(&num1, &num2);
            printf("Their difference is %lf", Subtraction(num1,num2));
        }
        else if (strcmp(choice, "*") == 0 || strcmp(choice, "3") == 0)
        {
            EnterTwoNumbers(&num1, &num2);
            printf("Their multiplication is %lf", Multiplication(num1,num2));
        }
        else if (strcmp(choice, "/") == 0 || strcmp(choice, "4") == 0)
        {
            EnterTwoNumbers(&num1, &num2);
            printf("Their division is %lf", Division(num1,num2));
        }
        else if (strcmp(choice, "log") == 0 || strcmp(choice, "5") == 0)
        {
            EnterTwoNumbers(&num1, &num2);
            printf("The result is %lf", LogarithmicValues(num1, num2));
        }
        else if (strcmp(choice, "square") == 0 || strcmp(choice, "6") == 0)
        {
            printf("Please enter a number: \n");
            scanf("%lf", &num1);
            printf("The result is %lf", SquareRoot(num1));
        }
        else
        {
            printf("There is no such operator.\n");
        }
        printf("\nWould you like to continue using the calculator?(1/0): ");
        scanf("%d", &usage);
        getchar();
    }
    printf("\nThank you for using my simple calculator!\n");
    return 0;
}
