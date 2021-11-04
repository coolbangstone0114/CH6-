#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf", &a); //loan
    scanf("%lf", &b); //interest rate(整數)
    b = 1 + (b / 12) * 0.01; //換算成百分比 0.01 = 除以100
    scanf("%lf", &c); //monthly payment
    /*
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    */

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        a *= b;
        a -= c;
        if (i == 0)
        {
            printf("Balance remaining after first payment: $%.2lf\n", a);
        }
        if (i == 1)
        {
            printf("Balance remaining after second payment: $%.2lf\n", a);
        }
        if (i == 2)
        {
            printf("Balance remaining after third payment: $%.2lf\n", a);
        }
    }
}
