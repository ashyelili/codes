#include <stdio.h>

int main()
{
    long int A, B;
    long int Sum;
    printf("Enter First Number: ");
    scanf("%ld", &A);
    printf("Enter Second Number: ");
    scanf("%ld", &B);
    Sum=A+B;
    printf("\nThe Sum of the two numbers is %ld", Sum);

    return 0;
}

