#include <stdio.h>
int main()
{
    int arr[5], *p, sum = 0;

    printf("Enter 5 numbers: ");
    for(p = arr; p < arr + 5; p++)
    scanf("%d", p);

    for(p = arr; p < arr + 5; p++)
    sum += *p;

    printf("Sum = %d\n", sum);
    return 0;
}