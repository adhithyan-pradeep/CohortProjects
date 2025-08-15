#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter a non negative number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("Factorial of n is %d", result);
    return 0;
}